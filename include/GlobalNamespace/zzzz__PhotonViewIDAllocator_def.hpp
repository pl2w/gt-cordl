#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonViewIDAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonViewIDAllocator)
// Forward declare root types
namespace GlobalNamespace {
class PhotonViewIDAllocator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonViewIDAllocator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonViewIDAllocator*, "", "PhotonViewIDAllocator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonViewIDAllocator
class CORDL_TYPE PhotonViewIDAllocator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isStatic, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStatic, put=__cordl_internal_set_isStatic)) bool  isStatic;

/// @brief Field order, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_order, put=__cordl_internal_set_order)) int32_t  order;

/// @brief Field pathString, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathString, put=__cordl_internal_set_pathString)) ::StringW  pathString;

static inline ::GlobalNamespace::PhotonViewIDAllocator* New_ctor() ;

constexpr bool const& __cordl_internal_get_isStatic() const;

constexpr bool& __cordl_internal_get_isStatic() ;

constexpr int32_t const& __cordl_internal_get_order() const;

constexpr int32_t& __cordl_internal_get_order() ;

constexpr ::StringW const& __cordl_internal_get_pathString() const;

constexpr ::StringW& __cordl_internal_get_pathString() ;

constexpr void __cordl_internal_set_isStatic(bool  value) ;

constexpr void __cordl_internal_set_order(int32_t  value) ;

constexpr void __cordl_internal_set_pathString(::StringW  value) ;

/// @brief Method .ctor, addr 0x56435e0, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonViewIDAllocator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonViewIDAllocator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonViewIDAllocator(PhotonViewIDAllocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonViewIDAllocator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonViewIDAllocator(PhotonViewIDAllocator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{655};

/// @brief Field isStatic, offset: 0x20, size: 0x1, def value: None
 bool  ___isStatic;

/// @brief Field pathString, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___pathString;

/// @brief Field order, offset: 0x30, size: 0x4, def value: None
 int32_t  ___order;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonViewIDAllocator, ___isStatic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonViewIDAllocator, ___pathString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhotonViewIDAllocator, ___order) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonViewIDAllocator) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
