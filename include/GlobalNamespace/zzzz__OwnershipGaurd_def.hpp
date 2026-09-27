#pragma once
// IWYU pragma private; include "GlobalNamespace/OwnershipGaurd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(OwnershipGaurd)
// Forward declare root types
namespace GlobalNamespace {
class OwnershipGaurd;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OwnershipGaurd*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OwnershipGaurd*, "", "OwnershipGaurd");
// Dependencies Photon.Pun.PhotonView, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OwnershipGaurd
class CORDL_TYPE OwnershipGaurd : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field NetViews, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_NetViews, put=__cordl_internal_set_NetViews)) ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  NetViews;

/// @brief Field autoRegisterAll, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoRegisterAll, put=__cordl_internal_set_autoRegisterAll)) bool  autoRegisterAll;

static inline ::GlobalNamespace::OwnershipGaurd* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5ab1b70, size 0x68, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5ab1ad0, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> const& __cordl_internal_get_NetViews() const;

constexpr ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>& __cordl_internal_get_NetViews() ;

constexpr bool const& __cordl_internal_get_autoRegisterAll() const;

constexpr bool& __cordl_internal_get_autoRegisterAll() ;

constexpr void __cordl_internal_set_NetViews(::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  value) ;

constexpr void __cordl_internal_set_autoRegisterAll(bool  value) ;

/// @brief Method .ctor, addr 0x5ab1bd8, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OwnershipGaurd() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OwnershipGaurd", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OwnershipGaurd(OwnershipGaurd && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OwnershipGaurd", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OwnershipGaurd(OwnershipGaurd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3289};

/// [SerializeField]
/// @brief Field NetViews, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  ___NetViews;

/// [SerializeField]
/// @brief Field autoRegisterAll, offset: 0x28, size: 0x1, def value: None
 bool  ___autoRegisterAll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OwnershipGaurd, ___NetViews) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OwnershipGaurd, ___autoRegisterAll) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OwnershipGaurd) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
