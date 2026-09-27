#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/Utilities/MicPermissionsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MicPermissionsManager)
namespace Oculus::VoiceSDK::Utilities {
class MicPermissionsManager___c__DisplayClass1_0;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Oculus::VoiceSDK::Utilities {
class MicPermissionsManager;
}
namespace Oculus::VoiceSDK::Utilities {
class MicPermissionsManager___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_T(::Oculus::VoiceSDK::Utilities::MicPermissionsManager*);
MARK_REF_T(::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0*);
DEFINE_IL2CPP_CLASS(::Oculus::VoiceSDK::Utilities::MicPermissionsManager*, "Oculus.VoiceSDK.Utilities", "MicPermissionsManager");
DEFINE_IL2CPP_CLASS(::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0*, "Oculus.VoiceSDK.Utilities", "MicPermissionsManager/<>c__DisplayClass1_0");
// Dependencies System.Object
namespace Oculus::VoiceSDK::Utilities {
// Is value type: false
// CS Name: Oculus.VoiceSDK.Utilities.MicPermissionsManager
class CORDL_TYPE MicPermissionsManager : public ::System::Object {
public:
// Declarations
using __c__DisplayClass1_0 = ::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0;

/// @brief Method HasMicPermission, addr 0xb943cac, size 0x44, virtual false, abstract: false, final false
static inline bool HasMicPermission() ;

/// @brief Method RequestMicPermission, addr 0xb943cf0, size 0x150, virtual false, abstract: false, final false
static inline void RequestMicPermission(::System::Action_1<::StringW>*  permissionGrantedCallback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicPermissionsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicPermissionsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicPermissionsManager(MicPermissionsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicPermissionsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicPermissionsManager(MicPermissionsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::VoiceSDK::Utilities::MicPermissionsManager) == 0x10, "Size mismatch!");

} // namespace end def Oculus::VoiceSDK::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::VoiceSDK::Utilities {
// Is value type: false
// CS Name: Oculus.VoiceSDK.Utilities.MicPermissionsManager/<>c__DisplayClass1_0
class CORDL_TYPE MicPermissionsManager___c__DisplayClass1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field permissionGrantedCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_permissionGrantedCallback, put=__cordl_internal_set_permissionGrantedCallback)) ::System::Action_1<::StringW>*  permissionGrantedCallback;

static inline ::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0* New_ctor() ;

/// @brief Method <RequestMicPermission>b__0, addr 0xb943e48, size 0x1c, virtual false, abstract: false, final false
inline void _RequestMicPermission_b__0(::StringW  s) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_permissionGrantedCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_permissionGrantedCallback() ;

constexpr void __cordl_internal_set_permissionGrantedCallback(::System::Action_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb943e40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicPermissionsManager___c__DisplayClass1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicPermissionsManager___c__DisplayClass1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicPermissionsManager___c__DisplayClass1_0(MicPermissionsManager___c__DisplayClass1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicPermissionsManager___c__DisplayClass1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicPermissionsManager___c__DisplayClass1_0(MicPermissionsManager___c__DisplayClass1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31684};

/// @brief Field permissionGrantedCallback, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___permissionGrantedCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0, ___permissionGrantedCallback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::VoiceSDK::Utilities::MicPermissionsManager___c__DisplayClass1_0) == 0x18, "Size mismatch!");

} // namespace end def Oculus::VoiceSDK::Utilities
