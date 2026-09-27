#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/AndroidAudioInAEC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAudioInAEC)
namespace Photon::Voice::Unity {
class AndroidAudioInAEC_DataCallback;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
template<typename T>
class IAudioPusher_1;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
class IResettable;
}
namespace Photon::Voice {
template<typename TType,typename TInfo>
class ObjectFactory_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class AndroidAudioInAEC;
}
namespace Photon::Voice::Unity {
class AndroidAudioInAEC_DataCallback;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::AndroidAudioInAEC*);
MARK_REF_T(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AndroidAudioInAEC*, "Photon.Voice.Unity", "AndroidAudioInAEC");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*, "Photon.Voice.Unity", "AndroidAudioInAEC/DataCallback");
// Dependencies System.IntPtr, System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AndroidAudioInAEC
class CORDL_TYPE AndroidAudioInAEC : public ::System::Object {
public:
// Declarations
using DataCallback = ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback;

 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_SamplingRate)) int32_t  SamplingRate;

/// @brief Field <Error>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field audioIn, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioIn, put=__cordl_internal_set_audioIn)) ::UnityEngine::AndroidJavaObject*  audioIn;

/// @brief Field audioInSampleRate, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioInSampleRate, put=__cordl_internal_set_audioInSampleRate)) int32_t  audioInSampleRate;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*  callback;

/// @brief Field javaBuf, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_javaBuf, put=__cordl_internal_set_javaBuf)) ::System::IntPtr  javaBuf;

/// @brief Field logger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IAudioPusher_1<int16_t>"
constexpr operator  ::Photon::Voice::IAudioPusher_1<int16_t>*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IResettable"
constexpr operator  ::Photon::Voice::IResettable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa75a4d8, size 0xe0, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::AndroidAudioInAEC* New_ctor(::Photon::Voice::ILogger*  logger, bool  enableAEC, bool  enableAGC, bool  enableNS) ;

/// @brief Method Reset, addr 0xa75a40c, size 0xcc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method SetCallback, addr 0xa75a0ec, size 0x2dc, virtual true, abstract: false, final true
inline void SetCallback(::System::Action_1<::ArrayW<int16_t>>*  callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<int16_t>,int32_t>*  bufferFactory) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_audioIn() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_audioIn() ;

constexpr int32_t const& __cordl_internal_get_audioInSampleRate() const;

constexpr int32_t& __cordl_internal_get_audioInSampleRate() ;

constexpr ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback* const& __cordl_internal_get_callback() const;

constexpr ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*& __cordl_internal_get_callback() ;

constexpr ::System::IntPtr const& __cordl_internal_get_javaBuf() const;

constexpr ::System::IntPtr& __cordl_internal_get_javaBuf() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_audioIn(::UnityEngine::AndroidJavaObject*  value) ;

constexpr void __cordl_internal_set_audioInSampleRate(int32_t  value) ;

constexpr void __cordl_internal_set_callback(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*  value) ;

constexpr void __cordl_internal_set_javaBuf(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

/// @brief Method .ctor, addr 0xa746dc4, size 0x10f8, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::ILogger*  logger, bool  enableAEC, bool  enableAGC, bool  enableNS) ;

/// @brief Method get_Channels, addr 0xa75a0e4, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0xa75a3fc, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// @brief Method get_SamplingRate, addr 0xa75a3f4, size 0x8, virtual true, abstract: false, final true
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::Photon::Voice::IAudioPusher_1<int16_t>"
constexpr ::Photon::Voice::IAudioPusher_1<int16_t>* i___Photon__Voice__IAudioPusher_1_int16_t_() noexcept;

/// @brief Convert to "::Photon::Voice::IResettable"
constexpr ::Photon::Voice::IResettable* i___Photon__Voice__IResettable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0xa75a404, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidAudioInAEC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidAudioInAEC", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidAudioInAEC(AndroidAudioInAEC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAudioInAEC", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidAudioInAEC(AndroidAudioInAEC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28510};

/// @brief Field audioIn, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___audioIn;

/// @brief Field javaBuf, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___javaBuf;

/// @brief Field logger, offset: 0x20, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// @brief Field audioInSampleRate, offset: 0x28, size: 0x4, def value: None
 int32_t  ___audioInSampleRate;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback*  ___callback;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC, ___audioIn) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC, ___javaBuf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC, ___logger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC, ___audioInSampleRate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC, ____Error_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::AndroidAudioInAEC) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
// Dependencies System.IntPtr, UnityEngine.AndroidJavaProxy
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.AndroidAudioInAEC/DataCallback
class CORDL_TYPE AndroidAudioInAEC_DataCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief Field callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::ArrayW<int16_t>>*  callback;

/// @brief Field cntFrame, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cntFrame, put=__cordl_internal_set_cntFrame)) int32_t  cntFrame;

/// @brief Field cntShort, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_cntShort, put=__cordl_internal_set_cntShort)) int32_t  cntShort;

/// @brief Field javaBuf, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_javaBuf, put=__cordl_internal_set_javaBuf)) ::System::IntPtr  javaBuf;

static inline ::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback* New_ctor() ;

/// @brief Method OnData, addr 0xa75a5b8, size 0x68, virtual false, abstract: false, final false
inline void OnData() ;

/// @brief Method OnStop, addr 0xa75a620, size 0xc, virtual false, abstract: false, final false
inline void OnStop() ;

/// @brief Method SetCallback, addr 0xa75a3c8, size 0x2c, virtual false, abstract: false, final false
inline void SetCallback(::System::Action_1<::ArrayW<int16_t>>*  callback, ::System::IntPtr  javaBuf) ;

constexpr ::System::Action_1<::ArrayW<int16_t>>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::ArrayW<int16_t>>*& __cordl_internal_get_callback() ;

constexpr int32_t const& __cordl_internal_get_cntFrame() const;

constexpr int32_t& __cordl_internal_get_cntFrame() ;

constexpr int32_t const& __cordl_internal_get_cntShort() const;

constexpr int32_t& __cordl_internal_get_cntShort() ;

constexpr ::System::IntPtr const& __cordl_internal_get_javaBuf() const;

constexpr ::System::IntPtr& __cordl_internal_get_javaBuf() ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::ArrayW<int16_t>>*  value) ;

constexpr void __cordl_internal_set_cntFrame(int32_t  value) ;

constexpr void __cordl_internal_set_cntShort(int32_t  value) ;

constexpr void __cordl_internal_set_javaBuf(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xa75a074, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidAudioInAEC_DataCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidAudioInAEC_DataCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidAudioInAEC_DataCallback(AndroidAudioInAEC_DataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAudioInAEC_DataCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidAudioInAEC_DataCallback(AndroidAudioInAEC_DataCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28509};

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<int16_t>>*  ___callback;

/// @brief Field javaBuf, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  ___javaBuf;

/// @brief Field cntFrame, offset: 0x30, size: 0x4, def value: None
 int32_t  ___cntFrame;

/// @brief Field cntShort, offset: 0x34, size: 0x4, def value: None
 int32_t  ___cntShort;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback, ___callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback, ___javaBuf) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback, ___cntFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback, ___cntShort) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::AndroidAudioInAEC_DataCallback) == 0x38, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
