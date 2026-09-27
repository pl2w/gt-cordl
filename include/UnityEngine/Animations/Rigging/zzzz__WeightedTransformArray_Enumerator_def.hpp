#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/WeightedTransformArray_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/Rigging/zzzz__WeightedTransformArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WeightedTransformArray_Enumerator)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Animations::Rigging {
struct WeightedTransformArray;
}
namespace UnityEngine::Animations::Rigging {
struct WeightedTransform;
}
// Forward declare root types
namespace GlobalNamespace {
struct WeightedTransformArray_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WeightedTransformArray_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WeightedTransformArray_Enumerator, "UnityEngine.Animations.Rigging", "WeightedTransformArray/Enumerator");
// Dependencies UnityEngine.Animations.Rigging.WeightedTransformArray
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.WeightedTransformArray/Enumerator
struct CORDL_TYPE WeightedTransformArray_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::UnityEngine::Animations::Rigging::WeightedTransform  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Animations::Rigging::WeightedTransform>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method MoveNext, addr 0xae7f7a8, size 0x68, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xae7f810, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xae7f87c, size 0x64, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0xae7f81c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method .ctor, addr 0xae7e3b0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::UnityEngine::Animations::Rigging::WeightedTransformArray>  array) ;

/// @brief Method get_Current, addr 0xae7f820, size 0x5c, virtual true, abstract: false, final true
inline ::UnityEngine::Animations::Rigging::WeightedTransform get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Animations::Rigging::WeightedTransform>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Animations::Rigging::WeightedTransform>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__Animations__Rigging__WeightedTransform_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr WeightedTransformArray_Enumerator() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::UnityEngine::Animations::Rigging::WeightedTransformArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WeightedTransformArray_Enumerator(::UnityEngine::Animations::Rigging::WeightedTransformArray  m_Array, int32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field m_Array, offset: 0x0, size: 0x88, def value: None
 ::UnityEngine::Animations::Rigging::WeightedTransformArray  m_Array;

/// @brief Field m_Index, offset: 0x88, size: 0x4, def value: None
 int32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WeightedTransformArray_Enumerator, m_Array) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WeightedTransformArray_Enumerator, m_Index) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WeightedTransformArray_Enumerator) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
