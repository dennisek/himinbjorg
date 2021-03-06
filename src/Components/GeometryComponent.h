#ifndef COMPONENTS_GEOMETRYCOMPONENT_H_
#define COMPONENTS_GEOMETRYCOMPONENT_H_

#include "Component.h"
#include <GL/glew.h>

namespace Himinbjorg
{
	class GeometryComponent: public Component
	{
	public:
		GeometryComponent();
		virtual ~GeometryComponent();

		// Getters
		int getVertexCount() const;
		GLuint getVao() const;
		GLuint getVbo() const;
	protected:
		GLsizei vertexCount;
		GLuint vao;
		GLuint vbo;
	};
} /* namespace Himinbjorg */

#endif /* COMPONENTS_GEOMETRYCOMPONENT_H_ */
