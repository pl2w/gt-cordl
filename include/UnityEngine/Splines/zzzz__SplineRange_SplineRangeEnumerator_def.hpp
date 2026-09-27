#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineRange_SplineRangeEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineRange_SplineRangeEnumerator)
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
namespace UnityEngine::Splines {
struct SplineRange;
}
// Forward declare root types
namespace GlobalNamespace {
struct SplineRange_SplineRangeEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineRange_SplineRangeEnumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineRange_SplineRangeEnumerator, "UnityEngine.Splines", "SplineRange/SplineRangeEnumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineRange/SplineRangeEnumerator
struct CORDL_TYPE SplineRange_SplineRangeEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) int32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb326d14, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xb326c80, size 0x20, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xb326ca0, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb326cd0, size 0x44, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xb326b94, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::SplineRange  range) ;

/// @brief Method get_Current, addr 0xb326cac, size 0x24, virtual true, abstract: false, final true
inline int32_t get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineRange_SplineRangeEnumerator() ;

// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Reverse", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr SplineRange_SplineRangeEnumerator(int32_t  m_Index, int32_t  m_Start, int32_t  m_End, int32_t  m_Count, bool  m_Reverse) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27997};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Index;

/// @brief Field m_Start, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Start;

/// @brief Field m_End, offset: 0x8, size: 0x4, def value: None
 int32_t  m_End;

/// @brief Field m_Count, offset: 0xc, size: 0x4, def value: None
 int32_t  m_Count;

/// @brief Field m_Reverse, offset: 0x10, size: 0x1, def value: None
 bool  m_Reverse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineRange_SplineRangeEnumerator, m_Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineRange_SplineRangeEnumerator, m_Start) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineRange_SplineRangeEnumerator, m_End) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineRange_SplineRangeEnumerator, m_Count) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineRange_SplineRangeEnumerator, m_Reverse) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineRange_SplineRangeEnumerator) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
