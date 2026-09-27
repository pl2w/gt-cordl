#pragma once
// IWYU pragma private; include "Oculus/Voice/VoiceSDKConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceSDKConstants)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Oculus::Voice {
class VoiceSDKConstants;
}
// Write type traits
MARK_REF_T(::Oculus::Voice::VoiceSDKConstants*);
DEFINE_IL2CPP_CLASS(::Oculus::Voice::VoiceSDKConstants*, "Oculus.Voice", "VoiceSDKConstants");
// Dependencies System.Object
namespace Oculus::Voice {
// Is value type: false
// CS Name: Oculus.Voice.VoiceSDKConstants
class CORDL_TYPE VoiceSDKConstants : public ::System::Object {
public:
// Declarations
/// @brief Field _isInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isInitialized, put=setStaticF__isInitialized)) bool  _isInitialized;

/// @brief Field _sdkVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sdkVersion, put=setStaticF__sdkVersion)) ::StringW  _sdkVersion;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Init, addr 0xb949bdc, size 0x170, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method OnCustomUserAgent, addr 0xb949d4c, size 0xdc, virtual false, abstract: false, final false
static inline void OnCustomUserAgent(::System::Text::StringBuilder*  sb) ;

static inline bool getStaticF__isInitialized() ;

static inline ::StringW getStaticF__sdkVersion() ;

/// @brief Method get_SdkVersion, addr 0xb94444c, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW get_SdkVersion() ;

static inline void setStaticF__isInitialized(bool  value) ;

static inline void setStaticF__sdkVersion(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSDKConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSDKConstants(VoiceSDKConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSDKConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSDKConstants(VoiceSDKConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31694};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Voice::VoiceSDKConstants) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Voice
