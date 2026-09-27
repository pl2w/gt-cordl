#pragma once
// IWYU pragma private; include "UnityEngine/Microphone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Microphone)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine {
class Microphone;
}
// Write type traits
MARK_REF_T(::UnityEngine::Microphone*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Microphone*, "UnityEngine", "Microphone");
// [StaticAccessor("GetAudioManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Microphone
class CORDL_TYPE Microphone : public ::System::Object {
public:
// Declarations
/// @brief Method End, addr 0xb558580, size 0x54, virtual false, abstract: false, final false
static inline void End(::StringW  deviceName) ;

/// @brief Method EndRecord, addr 0xb558338, size 0x3c, virtual false, abstract: false, final false
static inline void EndRecord(int32_t  deviceID) ;

/// @brief Method GetDeviceCaps, addr 0xb5583ec, size 0x54, virtual false, abstract: false, final false
static inline void GetDeviceCaps(int32_t  deviceID, ::by_ref<int32_t>  minFreq, ::by_ref<int32_t>  maxFreq) ;

/// @brief Method GetDeviceCaps, addr 0xb5586ac, size 0x78, virtual false, abstract: false, final false
static inline void GetDeviceCaps(::StringW  deviceName, ::by_ref<int32_t>  minFreq, ::by_ref<int32_t>  maxFreq) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetMicrophoneDeviceIDFromName, addr 0xb558094, size 0x170, virtual false, abstract: false, final false
static inline int32_t GetMicrophoneDeviceIDFromName(::StringW  name) ;

/// @brief Method GetMicrophoneDeviceIDFromName_Injected, addr 0xb558204, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetMicrophoneDeviceIDFromName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetPosition, addr 0xb558654, size 0x58, virtual false, abstract: false, final false
static inline int32_t GetPosition(::StringW  deviceName) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetRecordPosition, addr 0xb5583b0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetRecordPosition(int32_t  deviceID) ;

/// @brief Method IsRecording, addr 0xb558374, size 0x3c, virtual false, abstract: false, final false
static inline bool IsRecording(int32_t  deviceID) ;

/// @brief Method IsRecording, addr 0xb5585fc, size 0x58, virtual false, abstract: false, final false
static inline bool IsRecording(::StringW  deviceName) ;

/// @brief Method Start, addr 0xb558440, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Start(::StringW  deviceName, bool  loop, int32_t  lengthSec, int32_t  frequency) ;

/// @brief Method StartRecord, addr 0xb558240, size 0x94, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> StartRecord(int32_t  deviceID, bool  loop, float_t  lengthSec, int32_t  frequency) ;

/// @brief Method StartRecord_Injected, addr 0xb5582d4, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr StartRecord_Injected(int32_t  deviceID, bool  loop, float_t  lengthSec, int32_t  frequency) ;

/// [NativeName("GetRecordDevices")]
/// @brief Method get_devices, addr 0xb5585d4, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_devices() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Microphone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Microphone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Microphone(Microphone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Microphone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Microphone(Microphone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31536};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Microphone) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
