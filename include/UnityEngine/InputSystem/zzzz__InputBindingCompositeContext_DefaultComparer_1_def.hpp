#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBindingCompositeContext_DefaultComparer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBindingCompositeContext_DefaultComparer_1)
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TValue>
struct InputBindingCompositeContext_DefaultComparer_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::InputBindingCompositeContext_DefaultComparer_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::InputBindingCompositeContext_DefaultComparer_1, "UnityEngine.InputSystem", "InputBindingCompositeContext/DefaultComparer`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TValue>
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext/DefaultComparer`1<TValue>
#pragma pack(push, 0)
struct CORDL_TYPE InputBindingCompositeContext_DefaultComparer_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<TValue>"
constexpr operator  ::System::Collections::Generic::IComparer_1<TValue>*() ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t Compare(TValue  x, TValue  y) ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<TValue>"
constexpr ::System::Collections::Generic::IComparer_1<TValue>* i___System__Collections__Generic__IComparer_1_TValue_() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputBindingCompositeContext_DefaultComparer_1() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13402};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace
