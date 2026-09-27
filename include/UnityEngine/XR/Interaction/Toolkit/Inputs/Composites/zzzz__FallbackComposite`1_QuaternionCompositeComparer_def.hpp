#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Composites/FallbackComposite`1_QuaternionCompositeComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FallbackComposite`1_QuaternionCompositeComparer)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TValue>
struct FallbackComposite_1_QuaternionCompositeComparer;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::FallbackComposite_1_QuaternionCompositeComparer);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::FallbackComposite_1_QuaternionCompositeComparer, "UnityEngine.XR.Interaction.Toolkit.Inputs.Composites", "FallbackComposite`1/QuaternionCompositeComparer");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Composites.FallbackComposite`1/QuaternionCompositeComparer<TValue>
#pragma pack(push, 0)
struct CORDL_TYPE FallbackComposite_1_QuaternionCompositeComparer {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>*() ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t Compare(::UnityEngine::Quaternion  x, ::UnityEngine::Quaternion  y) ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Quaternion>* i___System__Collections__Generic__IComparer_1___UnityEngine__Quaternion_() ;

// Ctor Parameters []
// @brief default ctor
constexpr FallbackComposite_1_QuaternionCompositeComparer() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace
