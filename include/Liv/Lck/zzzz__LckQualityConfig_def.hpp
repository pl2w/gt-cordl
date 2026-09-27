#pragma once
// IWYU pragma private; include "Liv/Lck/LckQualityConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LckQualityConfig)
namespace Liv::Lck {
struct DeviceModel;
}
namespace Liv::Lck {
class ILckQualityConfig;
}
namespace Liv::Lck {
struct QualityOptionOverride;
}
namespace Liv::Lck {
struct QualityOption;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Liv::Lck {
class LckQualityConfig;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckQualityConfig*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckQualityConfig*, "Liv.Lck", "LckQualityConfig");
// [CreateAssetMenu(fileName = "LckQualityConfig", menuName = "LIV/LCK/QualityConfig")]
// Dependencies UnityEngine.ScriptableObject
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckQualityConfig
class CORDL_TYPE LckQualityConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AndroidOptionsDeviceOverrides, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AndroidOptionsDeviceOverrides, put=__cordl_internal_set_AndroidOptionsDeviceOverrides)) ::System::Collections::Generic::List_1<::Liv::Lck::QualityOptionOverride>*  AndroidOptionsDeviceOverrides;

/// @brief Field BaseAndroidQualityOptions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BaseAndroidQualityOptions, put=__cordl_internal_set_BaseAndroidQualityOptions)) ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  BaseAndroidQualityOptions;

/// @brief Field DesktopQualityOptions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DesktopQualityOptions, put=__cordl_internal_set_DesktopQualityOptions)) ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  DesktopQualityOptions;

/// @brief Convert operator to "::Liv::Lck::ILckQualityConfig"
constexpr operator  ::Liv::Lck::ILckQualityConfig*() noexcept;

/// @brief Method GetCurrentDeviceModel, addr 0x9cf379c, size 0x16c, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Liv::Lck::DeviceModel> GetCurrentDeviceModel() ;

/// @brief Method GetQualityOptionsForSystem, addr 0x9cf3534, size 0x268, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* GetQualityOptionsForSystem() ;

static inline ::Liv::Lck::LckQualityConfig* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOptionOverride>* const& __cordl_internal_get_AndroidOptionsDeviceOverrides() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOptionOverride>*& __cordl_internal_get_AndroidOptionsDeviceOverrides() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* const& __cordl_internal_get_BaseAndroidQualityOptions() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*& __cordl_internal_get_BaseAndroidQualityOptions() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>* const& __cordl_internal_get_DesktopQualityOptions() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*& __cordl_internal_get_DesktopQualityOptions() ;

constexpr void __cordl_internal_set_AndroidOptionsDeviceOverrides(::System::Collections::Generic::List_1<::Liv::Lck::QualityOptionOverride>*  value) ;

constexpr void __cordl_internal_set_BaseAndroidQualityOptions(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  value) ;

constexpr void __cordl_internal_set_DesktopQualityOptions(::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  value) ;

/// @brief Method .ctor, addr 0x9cf3908, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::ILckQualityConfig"
constexpr ::Liv::Lck::ILckQualityConfig* i___Liv__Lck__ILckQualityConfig() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckQualityConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckQualityConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckQualityConfig(LckQualityConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckQualityConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckQualityConfig(LckQualityConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24786};

/// [Header("Android")]
/// @brief Field BaseAndroidQualityOptions, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  ___BaseAndroidQualityOptions;

/// @brief Field AndroidOptionsDeviceOverrides, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::QualityOptionOverride>*  ___AndroidOptionsDeviceOverrides;

/// [Header("Desktop")]
/// @brief Field DesktopQualityOptions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::QualityOption>*  ___DesktopQualityOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckQualityConfig, ___BaseAndroidQualityOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckQualityConfig, ___AndroidOptionsDeviceOverrides) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckQualityConfig, ___DesktopQualityOptions) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckQualityConfig) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck
