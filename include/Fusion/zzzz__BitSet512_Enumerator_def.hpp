#pragma once
// IWYU pragma private; include "Fusion/BitSet512_Enumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet512_Enumerator)
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
struct BitSet512_Enumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitSet512_Enumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitSet512_Enumerator, "Fusion", "BitSet512/Enumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.BitSet512/Enumerator
struct CORDL_TYPE BitSet512_Enumerator {
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

/// @brief Method Dispose, addr 0x5f9a978, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x5f9a85c, size 0xf4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x5f9a850, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f9a950, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x5f9a5e4, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint64_t*  bits) ;

/// @brief Method get_Current, addr 0x5f9a848, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr BitSet512_Enumerator() ;

// Ctor Parameters [CppParam { name: "_bits", ty: "uint64_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BitSet512_Enumerator(uint64_t*  _bits, int32_t  _bit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18992};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _bits, offset: 0x0, size: 0x8, def value: None
 uint64_t*  _bits;

/// @brief Field _bit, offset: 0x8, size: 0x4, def value: None
 int32_t  _bit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitSet512_Enumerator, _bits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitSet512_Enumerator, _bit) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitSet512_Enumerator) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
