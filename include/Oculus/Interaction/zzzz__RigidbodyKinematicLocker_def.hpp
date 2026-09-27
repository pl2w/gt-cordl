#pragma once
// IWYU pragma private; include "Oculus/Interaction/RigidbodyKinematicLocker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RigidbodyKinematicLocker)
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Oculus::Interaction {
class RigidbodyKinematicLocker;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RigidbodyKinematicLocker*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RigidbodyKinematicLocker*, "Oculus.Interaction", "RigidbodyKinematicLocker");
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RigidbodyKinematicLocker
class CORDL_TYPE RigidbodyKinematicLocker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsLocked)) bool  IsLocked;

/// @brief Field _counter, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__counter, put=__cordl_internal_set__counter)) int32_t  _counter;

/// @brief Field _rigidbody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _savedIsKinematicState, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__savedIsKinematicState, put=__cordl_internal_set__savedIsKinematicState)) bool  _savedIsKinematicState;

/// @brief Method Awake, addr 0xa489bdc, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LockKinematic, addr 0xa489c34, size 0x50, virtual false, abstract: false, final false
inline void LockKinematic() ;

static inline ::Oculus::Interaction::RigidbodyKinematicLocker* New_ctor() ;

/// @brief Method UnlockKinematic, addr 0xa489c84, size 0xb0, virtual false, abstract: false, final false
inline void UnlockKinematic() ;

constexpr int32_t const& __cordl_internal_get__counter() const;

constexpr int32_t& __cordl_internal_get__counter() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr bool const& __cordl_internal_get__savedIsKinematicState() const;

constexpr bool& __cordl_internal_get__savedIsKinematicState() ;

constexpr void __cordl_internal_set__counter(int32_t  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__savedIsKinematicState(bool  value) ;

/// @brief Method .ctor, addr 0xa489d34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLocked, addr 0xa489bcc, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLocked() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigidbodyKinematicLocker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyKinematicLocker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigidbodyKinematicLocker(RigidbodyKinematicLocker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigidbodyKinematicLocker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigidbodyKinematicLocker(RigidbodyKinematicLocker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16004};

/// @brief Field _rigidbody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// @brief Field _counter, offset: 0x28, size: 0x4, def value: None
 int32_t  ____counter;

/// @brief Field _savedIsKinematicState, offset: 0x2c, size: 0x1, def value: None
 bool  ____savedIsKinematicState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RigidbodyKinematicLocker, ____rigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RigidbodyKinematicLocker, ____counter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RigidbodyKinematicLocker, ____savedIsKinematicState) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RigidbodyKinematicLocker) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
