#pragma once
// IWYU pragma private; include "GlobalNamespace/AverageVector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AverageVector3)
namespace GlobalNamespace {
struct AverageVector3_Sample;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AverageVector3;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AverageVector3*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AverageVector3*, "", "AverageVector3");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AverageVector3
class CORDL_TYPE AverageVector3 : public ::System::Object {
public:
// Declarations
using Sample = ::GlobalNamespace::AverageVector3_Sample;

/// @brief Field samples, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_samples, put=__cordl_internal_set_samples)) ::System::Collections::Generic::List_1<::GlobalNamespace::AverageVector3_Sample>*  samples;

/// @brief Field timeWindow, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeWindow, put=__cordl_internal_set_timeWindow)) float_t  timeWindow;

/// @brief Method AddSample, addr 0x5ae1240, size 0xd0, virtual false, abstract: false, final false
inline void AddSample(::UnityEngine::Vector3  sample, float_t  time) ;

/// @brief Method Clear, addr 0x5ae14d0, size 0x50, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetAverage, addr 0x5ae13e4, size 0xec, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAverage() ;

static inline ::GlobalNamespace::AverageVector3* New_ctor(float_t  averagingWindow) ;

/// @brief Method RefreshSamples, addr 0x5ae1310, size 0xd4, virtual false, abstract: false, final false
inline void RefreshSamples() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AverageVector3_Sample>* const& __cordl_internal_get_samples() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AverageVector3_Sample>*& __cordl_internal_get_samples() ;

constexpr float_t const& __cordl_internal_get_timeWindow() const;

constexpr float_t& __cordl_internal_get_timeWindow() ;

constexpr void __cordl_internal_set_samples(::System::Collections::Generic::List_1<::GlobalNamespace::AverageVector3_Sample>*  value) ;

constexpr void __cordl_internal_set_timeWindow(float_t  value) ;

/// @brief Method .ctor, addr 0x5ae1198, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(float_t  averagingWindow) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AverageVector3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AverageVector3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AverageVector3(AverageVector3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AverageVector3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AverageVector3(AverageVector3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3460};

/// @brief Field samples, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AverageVector3_Sample>*  ___samples;

/// @brief Field timeWindow, offset: 0x18, size: 0x4, def value: None
 float_t  ___timeWindow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AverageVector3, ___samples) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AverageVector3, ___timeWindow) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AverageVector3) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
