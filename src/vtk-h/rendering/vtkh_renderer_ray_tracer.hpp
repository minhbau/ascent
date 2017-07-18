#ifndef VTK_H_RENDERER_RAY_TRACER_HPP
#define VTK_H_RENDERER_RAY_TRACER_HPP

#include <rendering/vtkh_renderer.hpp>

namespace vtkh {

class RayTracer : public Renderer
{
public:
  RayTracer();
  virtual ~RayTracer();
  virtual Renderer::vtkmCanvasPtr GetNewCanvas() override;
};

} // namespace vtkh
#endif