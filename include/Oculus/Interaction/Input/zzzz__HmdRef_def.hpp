#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HmdRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HmdRef)
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HmdRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HmdRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HmdRef*, "Oculus.Interaction.Input", "HmdRef");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HmdRef
class CORDL_TYPE HmdRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Hmd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hmd, put=__cordl_internal_set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

/// @brief Field _hmd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Convert operator to "::Oculus::Interaction::Input::IHmd"
constexpr operator  ::Oculus::Interaction::Input::IHmd*() noexcept;

/// @brief Method Awake, addr 0xa513850, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllHmdRef, addr 0xa513964, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHmdRef(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method InjectHmd, addr 0xa513968, size 0xd0, virtual false, abstract: false, final false
inline void InjectHmd(::Oculus::Interaction::Input::IHmd*  hmd) ;

static inline ::Oculus::Interaction::Input::HmdRef* New_ctor() ;

/// @brief Method Start, addr 0xa5138b8, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetRootPose, addr 0xa5138bc, size 0xa8, virtual true, abstract: false, final true
inline bool TryGetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get_Hmd() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get_Hmd() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

constexpr void __cordl_internal_set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa513a38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenUpdated, addr 0xa5136f8, size 0xac, virtual true, abstract: false, final true
inline void add_WhenUpdated(::System::Action*  value) ;

/// @brief Convert to "::Oculus::Interaction::Input::IHmd"
constexpr ::Oculus::Interaction::Input::IHmd* i___Oculus__Interaction__Input__IHmd() noexcept;

/// @brief Method remove_WhenUpdated, addr 0xa5137a4, size 0xac, virtual true, abstract: false, final true
inline void remove_WhenUpdated(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HmdRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HmdRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HmdRef(HmdRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HmdRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HmdRef(HmdRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16509};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// @brief Field _hmd, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// @brief Field Hmd, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ___Hmd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HmdRef, ____hmd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HmdRef, ___Hmd) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HmdRef) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
