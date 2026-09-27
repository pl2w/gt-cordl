#pragma once
// IWYU pragma private; include "Drawing/DrawingUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DrawingUtilities)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Drawing {
class DrawingUtilities;
}
// Write type traits
MARK_REF_T(::Drawing::DrawingUtilities*);
DEFINE_IL2CPP_CLASS(::Drawing::DrawingUtilities*, "Drawing", "DrawingUtilities");
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.DrawingUtilities
class CORDL_TYPE DrawingUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field componentBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_componentBuffer, put=setStaticF_componentBuffer)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  componentBuffer;

/// @brief Method BoundsFrom, addr 0x55d45c0, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds BoundsFrom(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method BoundsFrom, addr 0x55d4d88, size 0x124, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds BoundsFrom(::ArrayW<::UnityEngine::Vector3>  points) ;

/// @brief Method BoundsFrom, addr 0x55d4ba4, size 0x1e4, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds BoundsFrom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points) ;

/// @brief Method BoundsFrom, addr 0x55d4eac, size 0x18c, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds BoundsFrom(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points) ;

/// @brief Method BoundsFrom, addr 0x55d4654, size 0x550, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds BoundsFrom(::UnityEngine::Transform*  transform) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* getStaticF_componentBuffer() ;

static inline void setStaticF_componentBuffer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrawingUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrawingUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DrawingUtilities(DrawingUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrawingUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrawingUtilities(DrawingUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27759};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::DrawingUtilities) == 0x10, "Size mismatch!");

} // namespace end def Drawing
