#pragma once
// IWYU pragma private; include "Fusion/NetworkBool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBool)
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
struct NetworkBool;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkBool);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBool, "Fusion", "NetworkBool");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkBool
struct CORDL_TYPE NetworkBool {
public:
// Declarations
/// @brief Field _value, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) int32_t  _value;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkBool>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkBool>*() ;

/// @brief Method Equals, addr 0x5fa0978, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fa08fc, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkBool  other) ;

/// @brief Method GetHashCode, addr 0x5fa09f0, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5fa090c, size 0x6c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__value() const;

constexpr int32_t& __cordl_internal_get__value() ;

constexpr void __cordl_internal_set__value(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fa08f0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(bool  value) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkBool>"
constexpr ::System::IEquatable_1<::Fusion::NetworkBool>* i___System__IEquatable_1___Fusion__NetworkBool_() ;

/// @brief Method op_Implicit, addr 0x5fa0a04, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBool op_Implicit___Fusion__NetworkBool(bool  val) ;

/// @brief Method op_Implicit, addr 0x5fa09f8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Fusion::NetworkBool  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBool() ;

// Ctor Parameters [CppParam { name: "_value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBool(int32_t  _value) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____value_padding[0x0];
/// [SerializeField]
/// @brief Field _value, offset: 0x0, size: 0x4, def value: None
 int32_t  ____value;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____value_padding_forAlignment[0x0];
/// [SerializeField]
/// @brief Field _value, offset: 0x0, size: 0x4, def value: None
 int32_t  ____value_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19062};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkBool) == 0x4, "Size mismatch!");

} // namespace end def Fusion
