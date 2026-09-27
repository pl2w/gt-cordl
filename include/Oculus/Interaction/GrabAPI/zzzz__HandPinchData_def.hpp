#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/HandPinchData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandPinchData)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
class HandPinchData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::GrabAPI::HandPinchData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::HandPinchData*, "Oculus.Interaction.GrabAPI", "HandPinchData");
// Dependencies System.Object
namespace Oculus::Interaction::GrabAPI {
// Is value type: false
// CS Name: Oculus.Interaction.GrabAPI.HandPinchData
class CORDL_TYPE HandPinchData : public ::System::Object {
public:
// Declarations
/// @brief Field _jointPositions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointPositions, put=__cordl_internal_set__jointPositions)) ::ArrayW<float_t>  _jointPositions;

static inline ::Oculus::Interaction::GrabAPI::HandPinchData* New_ctor() ;

/// @brief Method SetJoints, addr 0xa4fca68, size 0x124, virtual false, abstract: false, final false
inline void SetJoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  poses) ;

/// @brief Method SetJoints, addr 0xa4fcb8c, size 0x110, virtual false, abstract: false, final false
inline void SetJoints(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*  positions) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__jointPositions() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__jointPositions() ;

constexpr void __cordl_internal_set__jointPositions(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0xa4fca04, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandPinchData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandPinchData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandPinchData(HandPinchData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandPinchData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandPinchData(HandPinchData const& ) = delete;

/// @brief Field NumHandJoints offset 0xffffffff size 0x4
static constexpr int32_t  NumHandJoints{static_cast<int32_t>(0x18)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16422};

/// @brief Field _jointPositions, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t>  ____jointPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::HandPinchData, ____jointPositions) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::HandPinchData) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
