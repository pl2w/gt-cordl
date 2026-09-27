#pragma once
// IWYU pragma private; include "Photon/Voice/AudioDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDesc)
namespace Photon::Voice {
class IAudioDesc;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class AudioDesc;
}
// Write type traits
MARK_REF_T(::Photon::Voice::AudioDesc*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioDesc*, "Photon.Voice", "AudioDesc");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioDesc
class CORDL_TYPE AudioDesc : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Channels, put=set_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_SamplingRate, put=set_SamplingRate)) int32_t  SamplingRate;

/// @brief Field <Channels>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Channels_k__BackingField, put=__cordl_internal_set__Channels_k__BackingField)) int32_t  _Channels_k__BackingField;

/// @brief Field <Error>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <SamplingRate>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__SamplingRate_k__BackingField, put=__cordl_internal_set__SamplingRate_k__BackingField)) int32_t  _SamplingRate_k__BackingField;

/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa74c184, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioDesc* New_ctor(int32_t  samplingRate, int32_t  channels, ::StringW  error) ;

constexpr int32_t const& __cordl_internal_get__Channels_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Channels_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SamplingRate_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SamplingRate_k__BackingField() ;

constexpr void __cordl_internal_set__Channels_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__SamplingRate_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0xa74c110, size 0x44, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplingRate, int32_t  channels, ::StringW  error) ;

/// [CompilerGenerated]
/// @brief Method get_Channels, addr 0xa74c164, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0xa74c174, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_SamplingRate, addr 0xa74c154, size 0x8, virtual true, abstract: false, final true
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Channels, addr 0xa74c16c, size 0x8, virtual false, abstract: false, final false
inline void set_Channels(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0xa74c17c, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_SamplingRate, addr 0xa74c15c, size 0x8, virtual false, abstract: false, final false
inline void set_SamplingRate(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDesc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDesc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDesc(AudioDesc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDesc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDesc(AudioDesc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28442};

/// [CompilerGenerated]
/// @brief Field <SamplingRate>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____SamplingRate_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Channels>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Channels_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::AudioDesc, ____SamplingRate_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::AudioDesc, ____Channels_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::AudioDesc, ____Error_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::AudioDesc) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice
