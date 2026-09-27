#pragma once
// IWYU pragma private; include "Unity/Cinemachine/OutRec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__Rect64_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OutRec)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
class Active;
}
namespace Unity::Cinemachine {
class OutPt;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
class PolyPathBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class OutRec;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::OutRec*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::OutRec*, "Unity.Cinemachine", "OutRec");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object, Unity.Cinemachine.Rect64
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.OutRec
class CORDL_TYPE OutRec : public ::System::Object {
public:
// Declarations
/// @brief Field backEdge, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_backEdge, put=__cordl_internal_set_backEdge)) ::Unity::Cinemachine::Active*  backEdge;

/// @brief Field bounds, offset 0x48, size 0x20 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::Unity::Cinemachine::Rect64  bounds;

/// @brief Field frontEdge, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_frontEdge, put=__cordl_internal_set_frontEdge)) ::Unity::Cinemachine::Active*  frontEdge;

/// @brief Field idx, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_idx, put=__cordl_internal_set_idx)) int32_t  idx;

/// @brief Field isOpen, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOpen, put=__cordl_internal_set_isOpen)) bool  isOpen;

/// @brief Field owner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::Unity::Cinemachine::OutRec*  owner;

/// @brief Field path, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path;

/// @brief Field polypath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_polypath, put=__cordl_internal_set_polypath)) ::Unity::Cinemachine::PolyPathBase*  polypath;

/// @brief Field pts, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_pts, put=__cordl_internal_set_pts)) ::Unity::Cinemachine::OutPt*  pts;

/// @brief Field splits, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_splits, put=__cordl_internal_set_splits)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*  splits;

static inline ::Unity::Cinemachine::OutRec* New_ctor() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get_backEdge() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get_backEdge() ;

constexpr ::Unity::Cinemachine::Rect64 const& __cordl_internal_get_bounds() const;

constexpr ::Unity::Cinemachine::Rect64& __cordl_internal_get_bounds() ;

constexpr ::Unity::Cinemachine::Active* const& __cordl_internal_get_frontEdge() const;

constexpr ::Unity::Cinemachine::Active*& __cordl_internal_get_frontEdge() ;

constexpr int32_t const& __cordl_internal_get_idx() const;

constexpr int32_t& __cordl_internal_get_idx() ;

constexpr bool const& __cordl_internal_get_isOpen() const;

constexpr bool& __cordl_internal_get_isOpen() ;

constexpr ::Unity::Cinemachine::OutRec* const& __cordl_internal_get_owner() const;

constexpr ::Unity::Cinemachine::OutRec*& __cordl_internal_get_owner() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* const& __cordl_internal_get_path() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*& __cordl_internal_get_path() ;

constexpr ::Unity::Cinemachine::PolyPathBase* const& __cordl_internal_get_polypath() const;

constexpr ::Unity::Cinemachine::PolyPathBase*& __cordl_internal_get_polypath() ;

constexpr ::Unity::Cinemachine::OutPt* const& __cordl_internal_get_pts() const;

constexpr ::Unity::Cinemachine::OutPt*& __cordl_internal_get_pts() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>* const& __cordl_internal_get_splits() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*& __cordl_internal_get_splits() ;

constexpr void __cordl_internal_set_backEdge(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set_bounds(::Unity::Cinemachine::Rect64  value) ;

constexpr void __cordl_internal_set_frontEdge(::Unity::Cinemachine::Active*  value) ;

constexpr void __cordl_internal_set_idx(int32_t  value) ;

constexpr void __cordl_internal_set_isOpen(bool  value) ;

constexpr void __cordl_internal_set_owner(::Unity::Cinemachine::OutRec*  value) ;

constexpr void __cordl_internal_set_path(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  value) ;

constexpr void __cordl_internal_set_polypath(::Unity::Cinemachine::PolyPathBase*  value) ;

constexpr void __cordl_internal_set_pts(::Unity::Cinemachine::OutPt*  value) ;

constexpr void __cordl_internal_set_splits(::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*  value) ;

/// @brief Method .ctor, addr 0xaeef3f0, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutRec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutRec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OutRec(OutRec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutRec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutRec(OutRec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22511};

/// @brief Field idx, offset: 0x10, size: 0x4, def value: None
 int32_t  ___idx;

/// @brief Field owner, offset: 0x18, size: 0x8, def value: None
 ::Unity::Cinemachine::OutRec*  ___owner;

/// [Nullable(new[] { 2, 1 })]
/// @brief Field splits, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::OutRec*>*  ___splits;

/// @brief Field frontEdge, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ___frontEdge;

/// @brief Field backEdge, offset: 0x30, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  ___backEdge;

/// @brief Field pts, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::OutPt*  ___pts;

/// @brief Field polypath, offset: 0x40, size: 0x8, def value: None
 ::Unity::Cinemachine::PolyPathBase*  ___polypath;

/// @brief Field bounds, offset: 0x48, size: 0x20, def value: None
 ::Unity::Cinemachine::Rect64  ___bounds;

/// [Nullable(1)]
/// @brief Field path, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  ___path;

/// @brief Field isOpen, offset: 0x70, size: 0x1, def value: None
 bool  ___isOpen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::OutRec, ___idx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___owner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___splits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___frontEdge) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___backEdge) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___pts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___polypath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___bounds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___path) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::OutRec, ___isOpen) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::OutRec) == 0x78, "Size mismatch!");

} // namespace end def Unity::Cinemachine
