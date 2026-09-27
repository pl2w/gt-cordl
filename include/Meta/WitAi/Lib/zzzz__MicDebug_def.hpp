#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/MicDebug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MicDebug)
namespace Meta::WitAi::Interfaces {
class IAudioInputSource;
}
namespace System::IO {
class FileStream;
}
// Forward declare root types
namespace Meta::WitAi::Lib {
class MicDebug;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Lib::MicDebug*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::MicDebug*, "Meta.WitAi.Lib", "MicDebug");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.MicDebug
class CORDL_TYPE MicDebug : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _buffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Field _fileStream, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__fileStream, put=__cordl_internal_set__fileStream)) ::System::IO::FileStream*  _fileStream;

/// @brief Field _micSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__micSource, put=__cordl_internal_set__micSource)) ::Meta::WitAi::Interfaces::IAudioInputSource*  _micSource;

/// @brief Field fileDirectory, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileDirectory, put=__cordl_internal_set_fileDirectory)) ::StringW  fileDirectory;

/// @brief Field fileName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileName, put=__cordl_internal_set_fileName)) ::StringW  fileName;

static inline ::Meta::WitAi::Lib::MicDebug* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9e187d0, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9e1857c, size 0x254, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e182e4, size 0x298, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSampleReady, addr 0x9e18ca4, size 0x178, virtual false, abstract: false, final false
inline void OnSampleReady(int32_t  sampleCount, ::ArrayW<float_t>  sample, float_t  levelMax) ;

/// @brief Method OnStartRecording, addr 0x9e18824, size 0x480, virtual false, abstract: false, final false
inline void OnStartRecording() ;

/// @brief Method OnStopRecording, addr 0x9e18e1c, size 0x4, virtual false, abstract: false, final false
inline void OnStopRecording() ;

/// @brief Method UnloadStream, addr 0x9e187d4, size 0x50, virtual false, abstract: false, final false
inline void UnloadStream() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr ::System::IO::FileStream* const& __cordl_internal_get__fileStream() const;

constexpr ::System::IO::FileStream*& __cordl_internal_get__fileStream() ;

constexpr ::Meta::WitAi::Interfaces::IAudioInputSource* const& __cordl_internal_get__micSource() const;

constexpr ::Meta::WitAi::Interfaces::IAudioInputSource*& __cordl_internal_get__micSource() ;

constexpr ::StringW const& __cordl_internal_get_fileDirectory() const;

constexpr ::StringW& __cordl_internal_get_fileDirectory() ;

constexpr ::StringW const& __cordl_internal_get_fileName() const;

constexpr ::StringW& __cordl_internal_get_fileName() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__fileStream(::System::IO::FileStream*  value) ;

constexpr void __cordl_internal_set__micSource(::Meta::WitAi::Interfaces::IAudioInputSource*  value) ;

constexpr void __cordl_internal_set_fileDirectory(::StringW  value) ;

constexpr void __cordl_internal_set_fileName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e18e20, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicDebug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicDebug", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MicDebug(MicDebug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicDebug", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicDebug(MicDebug const& ) = delete;

/// @brief Field BYTES_PER_SHORT offset 0xffffffff size 0x4
static constexpr int32_t  BYTES_PER_SHORT{static_cast<int32_t>(0x2)};

/// @brief Field FLOAT_TO_SHORT offset 0xffffffff size 0x4
static constexpr int32_t  FLOAT_TO_SHORT{static_cast<int32_t>(0x7fff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32774};

/// [SerializeField]
/// @brief Field _micSource, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Interfaces::IAudioInputSource*  ____micSource;

/// [SerializeField]
/// @brief Field fileDirectory, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___fileDirectory;

/// [SerializeField]
/// @brief Field fileName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___fileName;

/// @brief Field _fileStream, offset: 0x38, size: 0x8, def value: None
 ::System::IO::FileStream*  ____fileStream;

/// @brief Field _buffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::MicDebug, ____micSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicDebug, ___fileDirectory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicDebug, ___fileName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicDebug, ____fileStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::MicDebug, ____buffer) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::MicDebug) == 0x48, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib
