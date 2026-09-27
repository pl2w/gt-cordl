#pragma once
// IWYU pragma private; include "Fusion/FixedArray`1_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FixedArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedArray`1_Enumerator)
namespace Fusion {
template<typename T>
struct FixedArray_1;
}
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
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct FixedArray_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::FixedArray_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::FixedArray_1_Enumerator, "Fusion", "FixedArray`1/Enumerator");
// Dependencies Fusion.FixedArray`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.FixedArray`1/Enumerator<T>
struct CORDL_TYPE FixedArray_1_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Fusion::FixedArray_1<T>  array) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedArray_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_array", ty: "::Fusion::FixedArray_1<T>", modifiers: "", def_value: None, comment: None }]
constexpr FixedArray_1_Enumerator(int32_t  _index, ::Fusion::FixedArray_1<T>  _array) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _index, offset: 0x0, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _array, offset: 0x8, size: 0x10, def value: None
 ::Fusion::FixedArray_1<T>  _array;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
