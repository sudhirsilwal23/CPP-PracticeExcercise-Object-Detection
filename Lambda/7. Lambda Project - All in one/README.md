# C++ Lambda Exercise: Object Detection Pipeline

This exercise demonstrates how to integrate **C++ lambda functions** into a simulated **object detection post-processing pipeline**.  
It combines **confidence-based filtering**, **dynamic thresholds**, **bounding box visualization**, and **logging** into a single program.

---

## 🚀 Scenario: Dynamic Confidence Filtering and Visualization

You are developing a **post-processing module** for an object detection system.  
Your program must:

1. **Filter detections** dynamically based on confidence thresholds.  
2. **Draw bounding boxes** of the filtered objects onto a simulated image.  
3. **Log processing steps** to confirm actions.  

You are developing a post-processing module for an image object detection model. Your task is to filter a list of detected objects based on a confidence threshold and then "visualize" the results by drawing bounding boxes on a simulated image. The confidence threshold can be changed dynamically, and you must log the processing steps.

This exercise will use a regular function for a common, reusable task and then a lambda for the specific, contextual filtering and visualization logic.

---

## 📖 Exercise Steps

1. **Data Structures**
   - Define a `std::vector` of `DetectedObject` structure with:
     - Bounding box coordinates `(x, y, width, height)`
     - A confidence score `float confidence`.

2. **Reusable Regular Function**
   - Implement a function:
     ```cpp
     bool is_high_quality(const DetectedObject& obj, float threshold);
     ```
     This checks if an object’s confidence score is above a threshold.

3. **Dynamic Confidence Threshold**
   - Define:
     ```cpp
     float min_confidence = 0.7f;
     ```
     The threshold can be adjusted dynamically.

4. **Lambda for Filtering**
   - Use a lambda with a capture clause ([&]) and std::copy_if to filter the initial vector. The lambda should capture min_confidence by reference and use it as the threshold for filtering. This demonstrates a flexible, on-the-fly filtering mechanism.

   - Use `std::copy_if` with a lambda:
     ```cpp
     std::copy_if(detections.begin(), detections.end(), std::back_inserter(filtered),
                  [&](const DetectedObject& obj) {
                      return is_high_quality(obj, min_confidence);
                  });
     ```
     The lambda captures `min_confidence` by reference.

5. **Simulated Image**
   - Create a 2D image:
     ```cpp
     std::vector<std::vector<int>> image(200, std::vector<int>(200, 0));
     ```

6. **Lambda for Drawing**
   - Inside the loop, define a lambda with a parameter that takes a single DetectedObject. This inner lambda's purpose is to "draw" the bounding box on the simulated image by setting the pixel values within the box to a specific value (e.g., 255). This lambda will also need to capture by reference the simulated image to modify it.
   - Inside a loop, define a lambda that modifies `image`:
     ```cpp
     auto draw_box = [&](const DetectedObject& obj) {
         for (int i = obj.y; i < obj.y + obj.height; ++i) {
             for (int j = obj.x; j < obj.x + obj.width; ++j) {
                 if (i < image.size() && j < image[0].size()) {
                     image[i][j] = 255; // mark as white
                 }
             }
         }
         std::cout << "Drew box for object with confidence " << obj.confidence << std::endl;
     };
     ```

7. **Visualization**
   - Apply the drawing lambda to each filtered object.
   - Print a confirmation message.

---

## 🧩 Key Concepts Practiced

- **Regular Functions** for reusable logic (`is_high_quality`)  
- **Lambdas with capture clauses** for dynamic thresholds  
- **Filtering with `std::copy_if`**  
- **Range-based loops** with inline lambdas for object-specific actions  
- **Simulated image modification**  

---

## ▶️ Example Output

