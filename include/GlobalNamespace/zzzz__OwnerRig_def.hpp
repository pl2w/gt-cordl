#pragma once
// IWYU pragma private; include "GlobalNamespace/OwnerRig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OwnerRig)
namespace GlobalNamespace {
class IRigAware;
}
namespace GlobalNamespace {
template<typename T>
class IVariable_1;
}
namespace GlobalNamespace {
class IVariable;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OwnerRig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OwnerRig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OwnerRig*, "", "OwnerRig");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OwnerRig
class CORDL_TYPE OwnerRig : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Convert operator to "::GlobalNamespace::IRigAware"
constexpr operator  ::GlobalNamespace::IRigAware*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVariable"
constexpr operator  ::GlobalNamespace::IVariable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVariable_1<::UnityW<::GlobalNamespace::VRRig>>"
constexpr operator  ::GlobalNamespace::IVariable_1<::UnityW<::GlobalNamespace::VRRig>>*() noexcept;

/// @brief Method Get, addr 0x596e29c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::VRRig> Get() ;

/// @brief Method IRigAware.SetRig, addr 0x596e358, size 0x8, virtual true, abstract: false, final true
inline void IRigAware_SetRig(::GlobalNamespace::VRRig*  rig) ;

static inline ::GlobalNamespace::OwnerRig* New_ctor() ;

/// @brief Method Set, addr 0x596e2ac, size 0xac, virtual false, abstract: false, final false
inline void Set(::UnityEngine::GameObject*  obj) ;

/// @brief Method Set, addr 0x596e2a4, size 0x8, virtual true, abstract: false, final true
inline void Set(::GlobalNamespace::VRRig*  value) ;

/// @brief Method TryFindRig, addr 0x596e1bc, size 0xe0, virtual false, abstract: false, final false
inline void TryFindRig() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x596e42c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IRigAware"
constexpr ::GlobalNamespace::IRigAware* i___GlobalNamespace__IRigAware() noexcept;

/// @brief Convert to "::GlobalNamespace::IVariable"
constexpr ::GlobalNamespace::IVariable* i___GlobalNamespace__IVariable() noexcept;

/// @brief Convert to "::GlobalNamespace::IVariable_1<::UnityW<::GlobalNamespace::VRRig>>"
constexpr ::GlobalNamespace::IVariable_1<::UnityW<::GlobalNamespace::VRRig>>* i___GlobalNamespace__IVariable_1___UnityW___GlobalNamespace__VRRig__() noexcept;

/// @brief Method op_Implicit, addr 0x596e400, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRig> op_Implicit___UnityW___GlobalNamespace__VRRig_(::GlobalNamespace::OwnerRig*  _cordl_or) ;

/// @brief Method op_Implicit, addr 0x596e360, size 0xa0, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::GlobalNamespace::OwnerRig*  _cordl_or) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OwnerRig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OwnerRig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OwnerRig(OwnerRig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OwnerRig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OwnerRig(OwnerRig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2397};

/// [SerializeField]
/// @brief Field _rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OwnerRig, ____rig) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OwnerRig) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
