#pragma once
// IWYU pragma private; include "Oculus/Interaction/UseFingerCurlAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UseFingerCurlAPI)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IFingerAPI;
}
namespace Oculus::Interaction {
class IFingerUseAPI;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class UseFingerCurlAPI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UseFingerCurlAPI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UseFingerCurlAPI*, "Oculus.Interaction", "UseFingerCurlAPI");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UseFingerCurlAPI
class CORDL_TYPE UseFingerCurlAPI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _grabAPI, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabAPI, put=__cordl_internal_set__grabAPI)) ::Oculus::Interaction::IFingerAPI*  _grabAPI;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _lastDataVersion, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastDataVersion, put=__cordl_internal_set__lastDataVersion)) int32_t  _lastDataVersion;

/// @brief Field _started, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IFingerUseAPI"
constexpr operator  ::Oculus::Interaction::IFingerUseAPI*() noexcept;

/// @brief Method Awake, addr 0xa46a8a8, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFingerUseStrength, addr 0xa46a92c, size 0x214, virtual true, abstract: false, final true
inline float_t GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method InjectAllUseFingerCurlAPI, addr 0xa46ab40, size 0x4, virtual false, abstract: false, final false
inline void InjectAllUseFingerCurlAPI(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa46ab44, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::UseFingerCurlAPI* New_ctor() ;

/// @brief Method Start, addr 0xa46a900, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::Oculus::Interaction::IFingerAPI* const& __cordl_internal_get__grabAPI() const;

constexpr ::Oculus::Interaction::IFingerAPI*& __cordl_internal_get__grabAPI() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr int32_t const& __cordl_internal_get__lastDataVersion() const;

constexpr int32_t& __cordl_internal_get__lastDataVersion() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__grabAPI(::Oculus::Interaction::IFingerAPI*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__lastDataVersion(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa46ac14, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa46a898, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Convert to "::Oculus::Interaction::IFingerUseAPI"
constexpr ::Oculus::Interaction::IFingerUseAPI* i___Oculus__Interaction__IFingerUseAPI() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa46a8a0, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UseFingerCurlAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UseFingerCurlAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UseFingerCurlAPI(UseFingerCurlAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UseFingerCurlAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UseFingerCurlAPI(UseFingerCurlAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15898};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// @brief Field _grabAPI, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::IFingerAPI*  ____grabAPI;

/// @brief Field _lastDataVersion, offset: 0x38, size: 0x4, def value: None
 int32_t  ____lastDataVersion;

/// @brief Field _started, offset: 0x3c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UseFingerCurlAPI, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UseFingerCurlAPI, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UseFingerCurlAPI, ____grabAPI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UseFingerCurlAPI, ____lastDataVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UseFingerCurlAPI, ____started) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UseFingerCurlAPI) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
