#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioHardLimiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckAudioHardLimiter)
namespace Liv::Lck {
class ILckAudioLimiter;
}
// Forward declare root types
namespace Liv::Lck {
class LckAudioHardLimiter;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckAudioHardLimiter*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckAudioHardLimiter*, "Liv.Lck", "LckAudioHardLimiter");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckAudioHardLimiter
class CORDL_TYPE LckAudioHardLimiter : public ::System::Object {
public:
// Declarations
/// @brief Field _attackTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__attackTime, put=__cordl_internal_set__attackTime)) float_t  _attackTime;

/// @brief Field _envelope, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__envelope, put=__cordl_internal_set__envelope)) float_t  _envelope;

/// @brief Field _makeUpGain, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__makeUpGain, put=__cordl_internal_set__makeUpGain)) float_t  _makeUpGain;

/// @brief Field _ratio, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__ratio, put=__cordl_internal_set__ratio)) float_t  _ratio;

/// @brief Field _releaseTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__releaseTime, put=__cordl_internal_set__releaseTime)) float_t  _releaseTime;

/// @brief Field _threshold, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold, put=__cordl_internal_set__threshold)) float_t  _threshold;

/// @brief Convert operator to "::Liv::Lck::ILckAudioLimiter"
constexpr operator  ::Liv::Lck::ILckAudioLimiter*() noexcept;

/// @brief Method ApplyLimiter, addr 0x9cddbf8, size 0xd4, virtual true, abstract: false, final true
inline float_t ApplyLimiter(float_t  audioIn, int32_t  sampleRate) ;

static inline ::Liv::Lck::LckAudioHardLimiter* New_ctor(float_t  threshold, float_t  ratio, float_t  makeUpGain, float_t  attackTime, float_t  releaseTime) ;

constexpr float_t const& __cordl_internal_get__attackTime() const;

constexpr float_t& __cordl_internal_get__attackTime() ;

constexpr float_t const& __cordl_internal_get__envelope() const;

constexpr float_t& __cordl_internal_get__envelope() ;

constexpr float_t const& __cordl_internal_get__makeUpGain() const;

constexpr float_t& __cordl_internal_get__makeUpGain() ;

constexpr float_t const& __cordl_internal_get__ratio() const;

constexpr float_t& __cordl_internal_get__ratio() ;

constexpr float_t const& __cordl_internal_get__releaseTime() const;

constexpr float_t& __cordl_internal_get__releaseTime() ;

constexpr float_t const& __cordl_internal_get__threshold() const;

constexpr float_t& __cordl_internal_get__threshold() ;

constexpr void __cordl_internal_set__attackTime(float_t  value) ;

constexpr void __cordl_internal_set__envelope(float_t  value) ;

constexpr void __cordl_internal_set__makeUpGain(float_t  value) ;

constexpr void __cordl_internal_set__ratio(float_t  value) ;

constexpr void __cordl_internal_set__releaseTime(float_t  value) ;

constexpr void __cordl_internal_set__threshold(float_t  value) ;

/// @brief Method .ctor, addr 0x9cddba4, size 0x54, virtual false, abstract: false, final false
inline void _ctor(float_t  threshold, float_t  ratio, float_t  makeUpGain, float_t  attackTime, float_t  releaseTime) ;

/// @brief Convert to "::Liv::Lck::ILckAudioLimiter"
constexpr ::Liv::Lck::ILckAudioLimiter* i___Liv__Lck__ILckAudioLimiter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckAudioHardLimiter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckAudioHardLimiter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckAudioHardLimiter(LckAudioHardLimiter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckAudioHardLimiter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckAudioHardLimiter(LckAudioHardLimiter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24693};

/// @brief Field _threshold, offset: 0x10, size: 0x4, def value: None
 float_t  ____threshold;

/// @brief Field _ratio, offset: 0x14, size: 0x4, def value: None
 float_t  ____ratio;

/// @brief Field _makeUpGain, offset: 0x18, size: 0x4, def value: None
 float_t  ____makeUpGain;

/// @brief Field _attackTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ____attackTime;

/// @brief Field _releaseTime, offset: 0x20, size: 0x4, def value: None
 float_t  ____releaseTime;

/// @brief Field _envelope, offset: 0x24, size: 0x4, def value: None
 float_t  ____envelope;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckAudioHardLimiter, ____threshold) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioHardLimiter, ____ratio) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioHardLimiter, ____makeUpGain) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioHardLimiter, ____attackTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioHardLimiter, ____releaseTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioHardLimiter, ____envelope) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckAudioHardLimiter) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
