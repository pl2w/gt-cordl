#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConnectionId)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetConnectionId;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConnectionId);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConnectionId, "Fusion.Sockets", "NetConnectionId");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConnectionId
struct CORDL_TYPE NetConnectionId {
public:
// Declarations
/// @brief Field Generation, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Generation, put=__cordl_internal_set_Generation)) uint32_t  Generation;

/// @brief Field Group, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_Group, put=__cordl_internal_set_Group)) int16_t  Group;

/// @brief Field GroupIndex, offset 0x2, size 0x2 
 __declspec(property(get=__cordl_internal_get_GroupIndex, put=__cordl_internal_set_GroupIndex)) int16_t  GroupIndex;

/// @brief Field Raw, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Raw, put=__cordl_internal_set_Raw)) uint64_t  Raw;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>"
constexpr operator  ::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>*() ;

/// @brief Method Equals, addr 0x602a690, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x602a680, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Sockets::NetConnectionId  other) ;

/// @brief Method GetHashCode, addr 0x602a708, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x602a71c, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr uint32_t const& __cordl_internal_get_Generation() const;

constexpr uint32_t& __cordl_internal_get_Generation() ;

constexpr int16_t const& __cordl_internal_get_Group() const;

constexpr int16_t& __cordl_internal_get_Group() ;

constexpr int16_t const& __cordl_internal_get_GroupIndex() const;

constexpr int16_t& __cordl_internal_get_GroupIndex() ;

constexpr uint64_t const& __cordl_internal_get_Raw() const;

constexpr uint64_t& __cordl_internal_get_Raw() ;

constexpr void __cordl_internal_set_Generation(uint32_t  value) ;

constexpr void __cordl_internal_set_Group(int16_t  value) ;

constexpr void __cordl_internal_set_GroupIndex(int16_t  value) ;

constexpr void __cordl_internal_set_Raw(uint64_t  value) ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>"
constexpr ::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>* i___System__IEquatable_1___Fusion__Sockets__NetConnectionId_() ;

/// @brief Method op_Equality, addr 0x602a710, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::Sockets::NetConnectionId  a, ::Fusion::Sockets::NetConnectionId  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetConnectionId() ;

// Ctor Parameters [CppParam { name: "Raw", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Group", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GroupIndex", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Generation", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConnectionId(uint64_t  Raw, int16_t  Group, int16_t  GroupIndex, uint32_t  Generation) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Raw_padding[0x0];
/// @brief Field Raw, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___Raw;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Raw_padding_forAlignment[0x0];
/// @brief Field Raw, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___Raw_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Group_padding[0x0];
/// @brief Field Group, offset: 0x0, size: 0x2, def value: None
 int16_t  ___Group;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Group_padding_forAlignment[0x0];
/// @brief Field Group, offset: 0x0, size: 0x2, def value: None
 int16_t  ___Group_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___GroupIndex_padding[0x2];
/// @brief Field GroupIndex, offset: 0x2, size: 0x2, def value: None
 int16_t  ___GroupIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___GroupIndex_padding_forAlignment[0x2];
/// @brief Field GroupIndex, offset: 0x2, size: 0x2, def value: None
 int16_t  ___GroupIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Generation_padding[0x4];
/// @brief Field Generation, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___Generation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Generation_padding_forAlignment[0x4];
/// @brief Field Generation, offset: 0x4, size: 0x4, def value: None
 uint32_t  ___Generation_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Sockets::NetConnectionId) == 0x8, "Size mismatch!");

} // namespace end def Fusion::Sockets
