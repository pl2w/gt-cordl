#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Vertex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__VertexFlags_def.hpp"
CORDL_MODULE_EXPORT(Vertex)
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
struct VertexFlags;
}
// Forward declare root types
namespace Unity::Cinemachine {
class Vertex;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Vertex*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Vertex*, "Unity.Cinemachine", "Vertex");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object, Unity.Cinemachine.Point64, Unity.Cinemachine.VertexFlags
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Vertex
class CORDL_TYPE Vertex : public ::System::Object {
public:
// Declarations
/// @brief Field flags, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) ::Unity::Cinemachine::VertexFlags  flags;

/// @brief Field next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Unity::Cinemachine::Vertex*  next;

/// @brief Field prev, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::Unity::Cinemachine::Vertex*  prev;

/// @brief Field pt, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_pt, put=__cordl_internal_set_pt)) ::Unity::Cinemachine::Point64  pt;

static inline ::Unity::Cinemachine::Vertex* New_ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::VertexFlags  flags, ::Unity::Cinemachine::Vertex*  prev) ;

constexpr ::Unity::Cinemachine::VertexFlags const& __cordl_internal_get_flags() const;

constexpr ::Unity::Cinemachine::VertexFlags& __cordl_internal_get_flags() ;

constexpr ::Unity::Cinemachine::Vertex* const& __cordl_internal_get_next() const;

constexpr ::Unity::Cinemachine::Vertex*& __cordl_internal_get_next() ;

constexpr ::Unity::Cinemachine::Vertex* const& __cordl_internal_get_prev() const;

constexpr ::Unity::Cinemachine::Vertex*& __cordl_internal_get_prev() ;

constexpr ::Unity::Cinemachine::Point64 const& __cordl_internal_get_pt() const;

constexpr ::Unity::Cinemachine::Point64& __cordl_internal_get_pt() ;

constexpr void __cordl_internal_set_flags(::Unity::Cinemachine::VertexFlags  value) ;

constexpr void __cordl_internal_set_next(::Unity::Cinemachine::Vertex*  value) ;

constexpr void __cordl_internal_set_prev(::Unity::Cinemachine::Vertex*  value) ;

constexpr void __cordl_internal_set_pt(::Unity::Cinemachine::Point64  value) ;

/// @brief Method .ctor, addr 0xaeef1e8, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::VertexFlags  flags, ::Unity::Cinemachine::Vertex*  prev) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vertex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vertex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vertex(Vertex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vertex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vertex(Vertex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22506};

/// @brief Field pt, offset: 0x10, size: 0x10, def value: None
 ::Unity::Cinemachine::Point64  ___pt;

/// @brief Field next, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::Vertex*  ___next;

/// @brief Field prev, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::Vertex*  ___prev;

/// @brief Field flags, offset: 0x30, size: 0x4, def value: None
 ::Unity::Cinemachine::VertexFlags  ___flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::Vertex, ___pt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Vertex, ___next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Vertex, ___prev) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Vertex, ___flags) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::Vertex) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine
