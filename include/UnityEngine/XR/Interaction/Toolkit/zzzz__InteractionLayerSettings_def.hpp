#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractionLayerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/zzzz__ScriptableSettings_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionLayerSettings)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionLayerSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*, "UnityEngine.XR.Interaction.Toolkit", "InteractionLayerSettings");
// [ScriptableSettingsPath("Assets/XRI/Settings")]
// Dependencies Unity.XR.CoreUtils.ScriptableSettings`1<T>
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.InteractionLayerSettings
class CORDL_TYPE InteractionLayerSettings : public ::Unity::XR::CoreUtils::ScriptableSettings_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings>> {
public:
// Declarations
/// @brief Field m_LayerNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LayerNames, put=__cordl_internal_set_m_LayerNames)) ::ArrayW<::StringW>  m_LayerNames;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method GetInstanceOrLoadOnly, addr 0xb4077b8, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings> GetInstanceOrLoadOnly() ;

/// @brief Method GetLayer, addr 0xb40766c, size 0x70, virtual false, abstract: false, final false
inline int32_t GetLayer(::StringW  layerName) ;

/// @brief Method GetLayerNameAt, addr 0xb4075d4, size 0x44, virtual false, abstract: false, final false
inline ::StringW GetLayerNameAt(int32_t  index) ;

/// @brief Method GetLayerNamesAndValues, addr 0xb4079f0, size 0x170, virtual false, abstract: false, final false
inline void GetLayerNamesAndValues(::System::Collections::Generic::List_1<::StringW>*  names, ::System::Collections::Generic::List_1<int32_t>*  values) ;

/// @brief Method IsLayerEmpty, addr 0xb407988, size 0x34, virtual false, abstract: false, final false
inline bool IsLayerEmpty(int32_t  index) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb407c60, size 0x4, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb407b60, size 0x100, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method SetLayerNameAt, addr 0xb4079bc, size 0x34, virtual false, abstract: false, final false
inline void SetLayerNameAt(int32_t  index, ::StringW  layerName) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_LayerNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_LayerNames() ;

constexpr void __cordl_internal_set_m_LayerNames(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xb407c64, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionLayerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionLayerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionLayerSettings(InteractionLayerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionLayerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionLayerSettings(InteractionLayerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11080};

/// @brief Field builtInLayerSize offset 0xffffffff size 0x4
static constexpr int32_t  builtInLayerSize{static_cast<int32_t>(0x1)};

/// @brief Field k_DefaultLayerName offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DefaultLayerName{u"Default"};

/// @brief Field layerSize offset 0xffffffff size 0x4
static constexpr int32_t  layerSize{static_cast<int32_t>(0x20)};

/// [SerializeField]
/// @brief Field m_LayerNames, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_LayerNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings, ___m_LayerNames) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
