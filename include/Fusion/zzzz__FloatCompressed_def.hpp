#pragma once
// IWYU pragma private; include "Fusion/FloatCompressed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatCompressed)
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
// Forward declare root types
namespace Fusion {
struct FloatCompressed;
}
// Write type traits
MARK_VAL_T(::Fusion::FloatCompressed);
DEFINE_IL2CPP_CLASS(::Fusion::FloatCompressed, "Fusion", "FloatCompressed");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.FloatCompressed
struct CORDL_TYPE FloatCompressed {
public:
// Declarations
/// @brief Field valueEncoded, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_valueEncoded, put=__cordl_internal_set_valueEncoded)) int32_t  valueEncoded;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::FloatCompressed>"
constexpr operator  ::System::IEquatable_1<::Fusion::FloatCompressed>*() ;

/// @brief Method Equals, addr 0x5f9c56c, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f9c55c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::FloatCompressed  other) ;

/// @brief Method GetHashCode, addr 0x5f9c5e4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

constexpr int32_t const& __cordl_internal_get_valueEncoded() const;

constexpr int32_t& __cordl_internal_get_valueEncoded() ;

constexpr void __cordl_internal_set_valueEncoded(int32_t  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::FloatCompressed>"
constexpr ::System::IEquatable_1<::Fusion::FloatCompressed>* i___System__IEquatable_1___Fusion__FloatCompressed_() ;

/// @brief Method op_Equality, addr 0x5f9c5ec, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::FloatCompressed  left, ::Fusion::FloatCompressed  right) ;

/// @brief Method op_Implicit, addr 0x5f9c468, size 0x94, virtual false, abstract: false, final false
static inline ::Fusion::FloatCompressed op_Implicit___Fusion__FloatCompressed(float_t  v) ;

/// @brief Method op_Implicit, addr 0x5f9c4fc, size 0x60, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::Fusion::FloatCompressed  q) ;

/// @brief Method op_Inequality, addr 0x5f9c5f8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::FloatCompressed  left, ::Fusion::FloatCompressed  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr FloatCompressed() ;

// Ctor Parameters [CppParam { name: "valueEncoded", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FloatCompressed(int32_t  valueEncoded) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___valueEncoded_padding[0x0];
/// @brief Field valueEncoded, offset: 0x0, size: 0x4, def value: None
 int32_t  ___valueEncoded;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___valueEncoded_padding_forAlignment[0x0];
/// @brief Field valueEncoded, offset: 0x0, size: 0x4, def value: None
 int32_t  ___valueEncoded_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FloatCompressed) == 0x4, "Size mismatch!");

} // namespace end def Fusion
