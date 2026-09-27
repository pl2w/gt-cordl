#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/HmdOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(HmdOffset)
namespace Oculus::Interaction::Input {
class IHmd;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class HmdOffset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::HmdOffset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::HmdOffset*, "Oculus.Interaction.PoseDetection", "HmdOffset");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.HmdOffset
class CORDL_TYPE HmdOffset : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Hmd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hmd, put=__cordl_internal_set_Hmd)) ::Oculus::Interaction::Input::IHmd*  Hmd;

/// @brief Field _disablePitchFromSource, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__disablePitchFromSource, put=__cordl_internal_set__disablePitchFromSource)) bool  _disablePitchFromSource;

/// @brief Field _disableRollFromSource, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableRollFromSource, put=__cordl_internal_set__disableRollFromSource)) bool  _disableRollFromSource;

/// @brief Field _disableYawFromSource, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__disableYawFromSource, put=__cordl_internal_set__disableYawFromSource)) bool  _disableYawFromSource;

/// @brief Field _hmd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmd, put=__cordl_internal_set__hmd)) ::UnityW<::UnityEngine::Object>  _hmd;

/// @brief Field _offsetRotation, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__offsetRotation, put=__cordl_internal_set__offsetRotation)) ::UnityEngine::Vector3  _offsetRotation;

/// @brief Field _offsetTranslation, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__offsetTranslation, put=__cordl_internal_set__offsetTranslation)) ::UnityEngine::Vector3  _offsetTranslation;

/// @brief Field _started, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa49e114, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleHmdUpdated, addr 0xa49e388, size 0x4ac, virtual true, abstract: false, final false
inline void HandleHmdUpdated() ;

/// @brief Method InjectAllHmdOffset, addr 0xa49e834, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHmdOffset(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method InjectHmd, addr 0xa49e838, size 0xd0, virtual false, abstract: false, final false
inline void InjectHmd(::Oculus::Interaction::Input::IHmd*  hmd) ;

/// @brief Method InjectOptionalDisablePitchFromSource, addr 0xa49e920, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalDisablePitchFromSource(bool  val) ;

/// @brief Method InjectOptionalDisableRollFromSource, addr 0xa49e930, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalDisableRollFromSource(bool  val) ;

/// @brief Method InjectOptionalDisableYawFromSource, addr 0xa49e928, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalDisableYawFromSource(bool  val) ;

/// @brief Method InjectOptionalOffsetRotation, addr 0xa49e914, size 0xc, virtual false, abstract: false, final false
inline void InjectOptionalOffsetRotation(::UnityEngine::Vector3  val) ;

/// @brief Method InjectOptionalOffsetTranslation, addr 0xa49e908, size 0xc, virtual false, abstract: false, final false
inline void InjectOptionalOffsetTranslation(::UnityEngine::Vector3  val) ;

static inline ::Oculus::Interaction::PoseDetection::HmdOffset* New_ctor() ;

/// @brief Method OnDisable, addr 0xa49e298, size 0xf0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa49e1a8, size 0xf0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa49e17c, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHmd* const& __cordl_internal_get_Hmd() const;

constexpr ::Oculus::Interaction::Input::IHmd*& __cordl_internal_get_Hmd() ;

constexpr bool const& __cordl_internal_get__disablePitchFromSource() const;

constexpr bool& __cordl_internal_get__disablePitchFromSource() ;

constexpr bool const& __cordl_internal_get__disableRollFromSource() const;

constexpr bool& __cordl_internal_get__disableRollFromSource() ;

constexpr bool const& __cordl_internal_get__disableYawFromSource() const;

constexpr bool& __cordl_internal_get__disableYawFromSource() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hmd() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hmd() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offsetRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offsetRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offsetTranslation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__offsetTranslation() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Hmd(::Oculus::Interaction::Input::IHmd*  value) ;

constexpr void __cordl_internal_set__disablePitchFromSource(bool  value) ;

constexpr void __cordl_internal_set__disableRollFromSource(bool  value) ;

constexpr void __cordl_internal_set__disableYawFromSource(bool  value) ;

constexpr void __cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__offsetRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__offsetTranslation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa49e938, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HmdOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HmdOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HmdOffset(HmdOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HmdOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HmdOffset(HmdOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16116};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHmd), new[] {  })]
/// @brief Field _hmd, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hmd;

/// @brief Field Hmd, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHmd*  ___Hmd;

/// [SerializeField]
/// @brief Field _offsetTranslation, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offsetTranslation;

/// [SerializeField]
/// @brief Field _offsetRotation, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____offsetRotation;

/// [SerializeField]
/// @brief Field _disablePitchFromSource, offset: 0x48, size: 0x1, def value: None
 bool  ____disablePitchFromSource;

/// [SerializeField]
/// @brief Field _disableYawFromSource, offset: 0x49, size: 0x1, def value: None
 bool  ____disableYawFromSource;

/// [SerializeField]
/// @brief Field _disableRollFromSource, offset: 0x4a, size: 0x1, def value: None
 bool  ____disableRollFromSource;

/// @brief Field _started, offset: 0x4b, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::HmdOffset, ____hmd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::HmdOffset, ___Hmd) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::HmdOffset, ____offsetTranslation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::HmdOffset, ____offsetRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::HmdOffset, ____disablePitchFromSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::HmdOffset, ____disableYawFromSource) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::HmdOffset, ____disableRollFromSource) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::HmdOffset, ____started) == 0x4b, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::HmdOffset) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
