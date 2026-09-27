#pragma once
// IWYU pragma private; include "Fusion/NetworkButtons.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkButtons)
namespace Fusion {
class INetworkStruct;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion {
struct NetworkButtons;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkButtons);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkButtons, "Fusion", "NetworkButtons");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkButtons
struct CORDL_TYPE NetworkButtons {
public:
// Declarations
 __declspec(property(get=get_Bits)) int32_t  Bits;

/// @brief Field _bits, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__bits, put=__cordl_internal_set__bits)) int32_t  _bits;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkButtons>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkButtons>*() ;

/// @brief Method Equals, addr 0x5fa0c6c, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fa0c5c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkButtons  other) ;

/// @brief Method GetHashCode, addr 0x5fa0ce4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetPressed, addr 0x5fa0bbc, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::NetworkButtons GetPressed(::Fusion::NetworkButtons  previous) ;

/// @brief Method GetPressedOrReleased, addr 0x5fa0b50, size 0x6c, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::Fusion::NetworkButtons,::Fusion::NetworkButtons> GetPressedOrReleased(::Fusion::NetworkButtons  previous) ;

/// @brief Method GetReleased, addr 0x5fa0bc8, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::NetworkButtons GetReleased(::Fusion::NetworkButtons  previous) ;

/// @brief Method IsSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool IsSet(T  button) ;

/// @brief Method IsSet, addr 0x5fa0a1c, size 0x38, virtual false, abstract: false, final false
inline bool IsSet(int32_t  button) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Set(T  button, bool  state) ;

/// @brief Method Set, addr 0x5fa0ad4, size 0x68, virtual false, abstract: false, final false
inline void Set(int32_t  button, bool  state) ;

/// @brief Method SetAllDown, addr 0x5fa0b44, size 0xc, virtual false, abstract: false, final false
inline void SetAllDown() ;

/// @brief Method SetAllUp, addr 0x5fa0b3c, size 0x8, virtual false, abstract: false, final false
inline void SetAllUp() ;

/// @brief Method SetDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetDown(T  button) ;

/// @brief Method SetDown, addr 0x5fa0a54, size 0x40, virtual false, abstract: false, final false
inline void SetDown(int32_t  button) ;

/// @brief Method SetUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetUp(T  button) ;

/// @brief Method SetUp, addr 0x5fa0a94, size 0x40, virtual false, abstract: false, final false
inline void SetUp(int32_t  button) ;

/// @brief Method WasPressed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool WasPressed(::Fusion::NetworkButtons  previous, T  button) ;

/// @brief Method WasPressed, addr 0x5fa0bd4, size 0x44, virtual false, abstract: false, final false
inline bool WasPressed(::Fusion::NetworkButtons  previous, int32_t  button) ;

/// @brief Method WasReleased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool WasReleased(::Fusion::NetworkButtons  previous, T  button) ;

/// @brief Method WasReleased, addr 0x5fa0c18, size 0x44, virtual false, abstract: false, final false
inline bool WasReleased(::Fusion::NetworkButtons  previous, int32_t  button) ;

constexpr int32_t const& __cordl_internal_get__bits() const;

constexpr int32_t& __cordl_internal_get__bits() ;

constexpr void __cordl_internal_set__bits(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fa0a14, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  buttons) ;

/// @brief Method get_Bits, addr 0x5fa0a0c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Bits() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkButtons>"
constexpr ::System::IEquatable_1<::Fusion::NetworkButtons>* i___System__IEquatable_1___Fusion__NetworkButtons_() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkButtons() ;

// Ctor Parameters [CppParam { name: "_bits", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkButtons(int32_t  _bits) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____bits_padding[0x0];
/// @brief Field _bits, offset: 0x0, size: 0x4, def value: None
 int32_t  ____bits;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____bits_padding_forAlignment[0x0];
/// @brief Field _bits, offset: 0x0, size: 0x4, def value: None
 int32_t  ____bits_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19063};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkButtons) == 0x4, "Size mismatch!");

} // namespace end def Fusion
