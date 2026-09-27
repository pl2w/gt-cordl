#pragma once
// IWYU pragma private; include "BoingKit/BoingWork_Output.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__QuaternionSpring_def.hpp"
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingWork_Output)
namespace BoingKit {
class BoingBehavior;
}
namespace BoingKit {
class BoingReactor;
}
namespace BoingKit {
struct QuaternionSpring;
}
namespace BoingKit {
struct Vector3Spring;
}
namespace GlobalNamespace {
struct BoingManager_UpdateMode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct BoingWork_Output;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingWork_Output);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingWork_Output, "BoingKit", "BoingWork/Output");
// Dependencies BoingKit.QuaternionSpring, BoingKit.Vector3Spring
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingWork/Output
struct CORDL_TYPE BoingWork_Output {
public:
// Declarations
/// @brief Field Stride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Stride, put=setStaticF_Stride)) int32_t  Stride;

/// @brief Method GatherOutput, addr 0x5e26f6c, size 0xa8, virtual false, abstract: false, final false
inline void GatherOutput(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingBehavior>>*  behaviorMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method GatherOutput, addr 0x5e27014, size 0xa8, virtual false, abstract: false, final false
inline void GatherOutput(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::BoingKit::BoingReactor>>*  reactorMap, ::GlobalNamespace::BoingManager_UpdateMode  updateMode) ;

/// @brief Method SuppressWarnings, addr 0x5e270bc, size 0xc, virtual false, abstract: false, final false
inline void SuppressWarnings() ;

/// @brief Method .ctor, addr 0x5e26f48, size 0x24, virtual false, abstract: false, final false
inline void _ctor(int32_t  instanceID, ::by_ref<::BoingKit::Vector3Spring>  positionSpring, ::by_ref<::BoingKit::QuaternionSpring>  rotationSpring, ::by_ref<::BoingKit::Vector3Spring>  scaleSpring) ;

static inline int32_t getStaticF_Stride() ;

static inline void setStaticF_Stride(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoingWork_Output() ;

// Ctor Parameters [CppParam { name: "InstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding0", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_padding2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PositionSpring", ty: "::BoingKit::Vector3Spring", modifiers: "", def_value: None, comment: None }, CppParam { name: "RotationSpring", ty: "::BoingKit::QuaternionSpring", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScaleSpring", ty: "::BoingKit::Vector3Spring", modifiers: "", def_value: None, comment: None }]
constexpr BoingWork_Output(int32_t  InstanceID, int32_t  m_padding0, int32_t  m_padding1, int32_t  m_padding2, ::BoingKit::Vector3Spring  PositionSpring, ::BoingKit::QuaternionSpring  RotationSpring, ::BoingKit::Vector3Spring  ScaleSpring) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field InstanceID, offset: 0x0, size: 0x4, def value: None
 int32_t  InstanceID;

/// @brief Field m_padding0, offset: 0x4, size: 0x4, def value: None
 int32_t  m_padding0;

/// @brief Field m_padding1, offset: 0x8, size: 0x4, def value: None
 int32_t  m_padding1;

/// @brief Field m_padding2, offset: 0xc, size: 0x4, def value: None
 int32_t  m_padding2;

/// @brief Field PositionSpring, offset: 0x10, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  PositionSpring;

/// @brief Field RotationSpring, offset: 0x30, size: 0x20, def value: None
 ::BoingKit::QuaternionSpring  RotationSpring;

/// @brief Field ScaleSpring, offset: 0x50, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  ScaleSpring;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingWork_Output, InstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Output, m_padding0) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Output, m_padding1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Output, m_padding2) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Output, PositionSpring) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Output, RotationSpring) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWork_Output, ScaleSpring) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingWork_Output) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
