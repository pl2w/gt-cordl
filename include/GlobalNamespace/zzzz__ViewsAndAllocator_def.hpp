#pragma once
// IWYU pragma private; include "GlobalNamespace/ViewsAndAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ViewsAndAllocator)
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ViewsAndAllocator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ViewsAndAllocator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ViewsAndAllocator*, "", "ViewsAndAllocator");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ViewsAndAllocator
class CORDL_TYPE ViewsAndAllocator : public ::System::Object {
public:
// Declarations
/// @brief Field isStatic, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStatic, put=__cordl_internal_set_isStatic)) bool  isStatic;

/// @brief Field order, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_order, put=__cordl_internal_set_order)) int32_t  order;

/// @brief Field path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field views, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_views, put=__cordl_internal_set_views)) ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  views;

static inline ::GlobalNamespace::ViewsAndAllocator* New_ctor() ;

constexpr bool const& __cordl_internal_get_isStatic() const;

constexpr bool& __cordl_internal_get_isStatic() ;

constexpr int32_t const& __cordl_internal_get_order() const;

constexpr int32_t& __cordl_internal_get_order() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>* const& __cordl_internal_get_views() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*& __cordl_internal_get_views() ;

constexpr void __cordl_internal_set_isStatic(bool  value) ;

constexpr void __cordl_internal_set_order(int32_t  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_views(::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  value) ;

/// @brief Method .ctor, addr 0x5643640, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ViewsAndAllocator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ViewsAndAllocator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ViewsAndAllocator(ViewsAndAllocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ViewsAndAllocator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ViewsAndAllocator(ViewsAndAllocator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{657};

/// @brief Field views, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  ___views;

/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field order, offset: 0x20, size: 0x4, def value: None
 int32_t  ___order;

/// @brief Field isStatic, offset: 0x24, size: 0x1, def value: None
 bool  ___isStatic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ViewsAndAllocator, ___views) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ViewsAndAllocator, ___path) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ViewsAndAllocator, ___order) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ViewsAndAllocator, ___isStatic) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ViewsAndAllocator) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
