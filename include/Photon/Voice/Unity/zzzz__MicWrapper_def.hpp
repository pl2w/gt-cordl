#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/MicWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicWrapper)
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
template<typename T>
class IAudioReader_1;
}
namespace Photon::Voice {
template<typename T>
class IDataReader_1;
}
namespace Photon::Voice {
class ILogger;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class MicWrapper;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::MicWrapper*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::MicWrapper*, "Photon.Voice.Unity", "MicWrapper");
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.MicWrapper
class CORDL_TYPE MicWrapper : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_Mic)) ::UnityW<::UnityEngine::AudioClip>  Mic;

 __declspec(property(get=get_SamplingRate)) int32_t  SamplingRate;

/// @brief Field <Error>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field device, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::StringW  device;

/// @brief Field logger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Field mic, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mic, put=__cordl_internal_set_mic)) ::UnityW<::UnityEngine::AudioClip>  mic;

/// @brief Field micLoopCnt, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_micLoopCnt, put=__cordl_internal_set_micLoopCnt)) int32_t  micLoopCnt;

/// @brief Field micPrevPos, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_micPrevPos, put=__cordl_internal_set_micPrevPos)) int32_t  micPrevPos;

/// @brief Field readAbsPos, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_readAbsPos, put=__cordl_internal_set_readAbsPos)) int32_t  readAbsPos;

/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr operator  ::Photon::Voice::IAudioReader_1<float_t>*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IDataReader_1<float_t>"
constexpr operator  ::Photon::Voice::IDataReader_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa75b20c, size 0x78, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::Unity::MicWrapper* New_ctor(::StringW  device, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method Read, addr 0xa75b284, size 0x24c, virtual true, abstract: false, final false
inline bool Read(::ArrayW<float_t>  buffer) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_device() const;

constexpr ::StringW& __cordl_internal_get_device() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_mic() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_mic() ;

constexpr int32_t const& __cordl_internal_get_micLoopCnt() const;

constexpr int32_t& __cordl_internal_get_micLoopCnt() ;

constexpr int32_t const& __cordl_internal_get_micPrevPos() const;

constexpr int32_t& __cordl_internal_get_micPrevPos() ;

constexpr int32_t const& __cordl_internal_get_readAbsPos() const;

constexpr int32_t& __cordl_internal_get_readAbsPos() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_device(::StringW  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

constexpr void __cordl_internal_set_mic(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_micLoopCnt(int32_t  value) ;

constexpr void __cordl_internal_set_micPrevPos(int32_t  value) ;

constexpr void __cordl_internal_set_readAbsPos(int32_t  value) ;

/// @brief Method .ctor, addr 0xa75ace4, size 0x4c8, virtual false, abstract: false, final false
inline void _ctor(::StringW  device, int32_t  suggestedFrequency, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method get_Channels, addr 0xa75b1d4, size 0x28, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0xa75b1fc, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// @brief Method get_Mic, addr 0xa75acdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Mic() ;

/// @brief Method get_SamplingRate, addr 0xa75b1ac, size 0x28, virtual true, abstract: false, final true
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::Photon::Voice::IAudioReader_1<float_t>"
constexpr ::Photon::Voice::IAudioReader_1<float_t>* i___Photon__Voice__IAudioReader_1_float_t_() noexcept;

/// @brief Convert to "::Photon::Voice::IDataReader_1<float_t>"
constexpr ::Photon::Voice::IDataReader_1<float_t>* i___Photon__Voice__IDataReader_1_float_t_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0xa75b204, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicWrapper(MicWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicWrapper(MicWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28516};

/// @brief Field mic, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___mic;

/// @brief Field device, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___device;

/// @brief Field logger, offset: 0x20, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// @brief Field micPrevPos, offset: 0x30, size: 0x4, def value: None
 int32_t  ___micPrevPos;

/// @brief Field micLoopCnt, offset: 0x34, size: 0x4, def value: None
 int32_t  ___micLoopCnt;

/// @brief Field readAbsPos, offset: 0x38, size: 0x4, def value: None
 int32_t  ___readAbsPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::MicWrapper, ___mic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapper, ___device) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapper, ___logger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapper, ____Error_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapper, ___micPrevPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapper, ___micLoopCnt) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::MicWrapper, ___readAbsPos) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::MicWrapper) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
