#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__SliceDirection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineRange)
namespace GlobalNamespace {
struct SplineRange_SplineRangeEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::Splines {
struct SliceDirection;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineRange);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineRange, "UnityEngine.Splines", "SplineRange");
// [DefaultMember("Item")]
// Dependencies UnityEngine.Splines.SliceDirection
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineRange
struct CORDL_TYPE SplineRange {
public:
// Declarations
using SplineRangeEnumerator = ::GlobalNamespace::SplineRange_SplineRangeEnumerator;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Direction, put=set_Direction)) ::UnityEngine::Splines::SliceDirection  Direction;

 __declspec(property(get=get_End)) int32_t  End;

 __declspec(property(get=get_Item)) int32_t  Item[];

 __declspec(property(get=get_Start, put=set_Start)) int32_t  Start;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0xb326b04, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb326bcc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0xb326bd0, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb326ad8, size 0x18, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  count) ;

/// @brief Method .ctor, addr 0xb326af0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  count, ::UnityEngine::Splines::SliceDirection  direction) ;

/// @brief Method get_Count, addr 0xb326ab4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Direction, addr 0xb326ac8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SliceDirection get_Direction() ;

/// @brief Method get_End, addr 0xb326a78, size 0x24, virtual false, abstract: false, final false
inline int32_t get_End() ;

/// @brief Method get_Item, addr 0xb326a9c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method get_Start, addr 0xb326a68, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Start() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method set_Count, addr 0xb326abc, size 0xc, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_Direction, addr 0xb326ad0, size 0x8, virtual false, abstract: false, final false
inline void set_Direction(::UnityEngine::Splines::SliceDirection  value) ;

/// @brief Method set_Start, addr 0xb326a70, size 0x8, virtual false, abstract: false, final false
inline void set_Start(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineRange() ;

// Ctor Parameters [CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Direction", ty: "::UnityEngine::Splines::SliceDirection", modifiers: "", def_value: None, comment: None }]
constexpr SplineRange(int32_t  m_Start, int32_t  m_Count, ::UnityEngine::Splines::SliceDirection  m_Direction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27998};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [SerializeField]
/// @brief Field m_Start, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Start;

/// [SerializeField]
/// @brief Field m_Count, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Count;

/// [SerializeField]
/// @brief Field m_Direction, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Splines::SliceDirection  m_Direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineRange, m_Start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineRange, m_Count) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineRange, m_Direction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineRange) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::Splines
