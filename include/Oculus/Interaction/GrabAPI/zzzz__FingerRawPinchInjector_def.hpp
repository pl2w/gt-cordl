#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerRawPinchInjector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FingerRawPinchInjector)
namespace Oculus::Interaction::GrabAPI {
class HandGrabAPI;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class FingerRawPinchInjector;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::FingerRawPinchInjector*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::FingerRawPinchInjector*, "Oculus.Interaction.GrabAPI", "FingerRawPinchInjector");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.FingerRawPinchInjector
class CORDL_TYPE FingerRawPinchInjector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _handGrabAPI, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabAPI, put=__cordl_internal_set__handGrabAPI)) ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  _handGrabAPI;

/// @brief Method Awake, addr 0xa4fe328, size 0x98, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::GrabAPI::FingerRawPinchInjector* New_ctor() ;

constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI> const& __cordl_internal_get__handGrabAPI() const;

constexpr ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>& __cordl_internal_get__handGrabAPI() ;

constexpr void __cordl_internal_set__handGrabAPI(::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  value) ;

/// @brief Method .ctor, addr 0xa4fe3c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerRawPinchInjector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerRawPinchInjector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerRawPinchInjector(FingerRawPinchInjector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerRawPinchInjector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerRawPinchInjector(FingerRawPinchInjector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16427};

/// [SerializeField]
/// @brief Field _handGrabAPI, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::GrabAPI::HandGrabAPI>  ____handGrabAPI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRawPinchInjector, ____handGrabAPI) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRawPinchInjector) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
