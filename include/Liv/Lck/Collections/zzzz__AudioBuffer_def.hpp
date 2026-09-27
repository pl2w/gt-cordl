#pragma once
// IWYU pragma private; include "Liv/Lck/Collections/AudioBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioBuffer)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Liv::Lck::Collections {
class AudioBuffer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Collections::AudioBuffer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Collections::AudioBuffer*, "Liv.Lck.Collections", "AudioBuffer");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Liv::Lck::Collections {
// Is value type: false
// CS Name: Liv.Lck.Collections.AudioBuffer
class CORDL_TYPE AudioBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Buffer)) ::ArrayW<float_t>  Buffer;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) float_t  Item[];

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<float_t>  _buffer;

/// @brief Field _logicalCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__logicalCount, put=__cordl_internal_set__logicalCount)) int32_t  _logicalCount;

/// @brief Method Clear, addr 0x9d3686c, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Liv::Lck::Collections::AudioBuffer* New_ctor(int32_t  maxCapacity) ;

/// @brief Method OverrideCount, addr 0x9d36b20, size 0x8, virtual false, abstract: false, final false
inline void OverrideCount(int32_t  newCount) ;

/// @brief Method PadAudioBuffer, addr 0x9d36b28, size 0x38, virtual false, abstract: false, final false
inline void PadAudioBuffer(int32_t  samplesToPad) ;

/// @brief Method SkipAudioSamples, addr 0x9d36b60, size 0x5c, virtual false, abstract: false, final false
inline void SkipAudioSamples(int32_t  samplesToSkip) ;

/// @brief Method TryAdd, addr 0x9d36874, size 0x4c, virtual false, abstract: false, final false
inline bool TryAdd(float_t  value) ;

/// @brief Method TryCopyFrom, addr 0x9d368c0, size 0x5c, virtual false, abstract: false, final false
inline bool TryCopyFrom(::ArrayW<float_t>  source, int32_t  sourceIndex, int32_t  count) ;

/// @brief Method TryCopyFrom, addr 0x9d369b8, size 0x6c, virtual false, abstract: false, final false
inline bool TryCopyFrom(::Liv::Lck::Collections::AudioBuffer*  source) ;

/// @brief Method TryCopyFrom, addr 0x9d3691c, size 0x9c, virtual false, abstract: false, final false
inline bool TryCopyFrom(::System::IntPtr  source, int32_t  count) ;

/// @brief Method TryExtendFrom, addr 0x9d36a94, size 0x18, virtual false, abstract: false, final false
inline bool TryExtendFrom(::ArrayW<float_t>  source) ;

/// @brief Method TryExtendFrom, addr 0x9d36aac, size 0x74, virtual false, abstract: false, final false
inline bool TryExtendFrom(::Liv::Lck::Collections::AudioBuffer*  source) ;

/// @brief Method TryExtendFrom, addr 0x9d36a24, size 0x70, virtual false, abstract: false, final false
inline bool TryExtendFrom(::ArrayW<float_t>  sourceArray, int32_t  sourceIndex, int32_t  length) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__logicalCount() const;

constexpr int32_t& __cordl_internal_get__logicalCount() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__logicalCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x9d367ec, size 0x78, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxCapacity) ;

/// @brief Method get_Buffer, addr 0x9d36864, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_Buffer() ;

/// @brief Method get_Capacity, addr 0x9d367a4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x9d3679c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x9d367bc, size 0x30, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBuffer(AudioBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBuffer(AudioBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24820};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ____buffer;

/// @brief Field _logicalCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____logicalCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Collections::AudioBuffer, ____buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Collections::AudioBuffer, ____logicalCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Collections::AudioBuffer) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Collections
