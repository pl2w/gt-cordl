#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/AttachPointVelocityTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AttachPointVelocityTracker)
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IAttachPointVelocityProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class IAttachPointVelocityTracker;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Collections {
template<typename T>
class CircularBuffer_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
class AttachPointVelocityTracker;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*, "UnityEngine.XR.Interaction.Toolkit.Attachment", "AttachPointVelocityTracker");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit.Interaction")]
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::Attachment {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Attachment.AttachPointVelocityTracker
class CORDL_TYPE AttachPointVelocityTracker : public ::System::Object {
public:
// Declarations
/// @brief Field m_AttachPointAngularVelocity, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_AttachPointAngularVelocity, put=__cordl_internal_set_m_AttachPointAngularVelocity)) ::UnityEngine::Vector3  m_AttachPointAngularVelocity;

/// @brief Field m_AttachPointVelocity, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_AttachPointVelocity, put=__cordl_internal_set_m_AttachPointVelocity)) ::UnityEngine::Vector3  m_AttachPointVelocity;

/// @brief Field m_PositionTimeBuffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PositionTimeBuffer, put=__cordl_internal_set_m_PositionTimeBuffer)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*  m_PositionTimeBuffer;

/// @brief Field m_RotationTimeBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotationTimeBuffer, put=__cordl_internal_set_m_RotationTimeBuffer)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Quaternion,float_t>>*  m_RotationTimeBuffer;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker*() noexcept;

/// @brief Method CalculateAngularVelocityWithWeightedRegression, addr 0xb4ada10, size 0x41c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateAngularVelocityWithWeightedRegression() ;

/// @brief Method CalculateVelocityWithWeightedLinearRegression, addr 0xb4ad688, size 0x388, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateVelocityWithWeightedLinearRegression() ;

/// @brief Method GetAttachPointAngularVelocity, addr 0xb4adf04, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetAttachPointAngularVelocity() ;

/// @brief Method GetAttachPointVelocity, addr 0xb4adef8, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 GetAttachPointVelocity() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker* New_ctor() ;

/// @brief Method ResetVelocityTracking, addr 0xb4ade2c, size 0xcc, virtual false, abstract: false, final false
inline void ResetVelocityTracking() ;

/// @brief Method UpdateAttachPointVelocityData, addr 0xb4ad330, size 0xc, virtual true, abstract: false, final true
inline void UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform) ;

/// @brief Method UpdateAttachPointVelocityData, addr 0xb4ad33c, size 0x340, virtual false, abstract: false, final false
inline void UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform, bool  useXROriginTransform, ::UnityEngine::Transform*  xrOriginTransform) ;

/// @brief Method UpdateAttachPointVelocityData, addr 0xb4ad67c, size 0xc, virtual true, abstract: false, final true
inline void UpdateAttachPointVelocityData(::UnityEngine::Transform*  attachTransform, ::UnityEngine::Transform*  xrOriginTransform) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_AttachPointAngularVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_AttachPointAngularVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_AttachPointVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_AttachPointVelocity() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>* const& __cordl_internal_get_m_PositionTimeBuffer() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*& __cordl_internal_get_m_PositionTimeBuffer() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Quaternion,float_t>>* const& __cordl_internal_get_m_RotationTimeBuffer() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Quaternion,float_t>>*& __cordl_internal_get_m_RotationTimeBuffer() ;

constexpr void __cordl_internal_set_m_AttachPointAngularVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_AttachPointVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PositionTimeBuffer(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*  value) ;

constexpr void __cordl_internal_set_m_RotationTimeBuffer(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Quaternion,float_t>>*  value) ;

/// @brief Method .ctor, addr 0xb4adf10, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityProvider* i___UnityEngine__XR__Interaction__Toolkit__Attachment__IAttachPointVelocityProvider() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IAttachPointVelocityTracker* i___UnityEngine__XR__Interaction__Toolkit__Attachment__IAttachPointVelocityTracker() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttachPointVelocityTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttachPointVelocityTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttachPointVelocityTracker(AttachPointVelocityTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttachPointVelocityTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttachPointVelocityTracker(AttachPointVelocityTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11574};

/// @brief Field k_BufferSize offset 0xffffffff size 0x4
static constexpr int32_t  k_BufferSize{static_cast<int32_t>(0x14)};

/// @brief Field k_MinimumDeltaTime offset 0xffffffff size 0x4
static constexpr float_t  k_MinimumDeltaTime{static_cast<float_t>(1e-5f)};

/// [TupleElementNames(new[] { "position", "time" })]
/// @brief Field m_PositionTimeBuffer, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*  ___m_PositionTimeBuffer;

/// [TupleElementNames(new[] { "rotation", "time" })]
/// @brief Field m_RotationTimeBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<::System::ValueTuple_2<::UnityEngine::Quaternion,float_t>>*  ___m_RotationTimeBuffer;

/// @brief Field m_AttachPointVelocity, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_AttachPointVelocity;

/// @brief Field m_AttachPointAngularVelocity, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_AttachPointAngularVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker, ___m_PositionTimeBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker, ___m_RotationTimeBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker, ___m_AttachPointVelocity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker, ___m_AttachPointAngularVelocity) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Attachment
