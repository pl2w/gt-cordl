#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AnimationData)
// Forward declare root types
namespace GlobalNamespace {
class AnimationData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimationData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationData*, "", "AnimationData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimationData
class CORDL_TYPE AnimationData : public ::System::Object {
public:
// Declarations
/// @brief Field animName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_animName, put=__cordl_internal_set_animName)) ::StringW  animName;

/// @brief Field duration, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field eventTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventTime, put=__cordl_internal_set_eventTime)) float_t  eventTime;

/// @brief Field speed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

static inline ::GlobalNamespace::AnimationData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_animName() const;

constexpr ::StringW& __cordl_internal_get_animName() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_eventTime() const;

constexpr float_t& __cordl_internal_get_eventTime() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set_animName(::StringW  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_eventTime(float_t  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

/// @brief Method .ctor, addr 0x5866108, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationData(AnimationData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationData(AnimationData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1839};

/// @brief Field animName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___animName;

/// @brief Field eventTime, offset: 0x18, size: 0x4, def value: None
 float_t  ___eventTime;

/// @brief Field duration, offset: 0x1c, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field speed, offset: 0x20, size: 0x4, def value: None
 float_t  ___speed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationData, ___animName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationData, ___eventTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationData, ___duration) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationData, ___speed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
