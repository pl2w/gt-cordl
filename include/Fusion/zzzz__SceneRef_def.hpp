#pragma once
// IWYU pragma private; include "Fusion/SceneRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneRef)
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
struct SceneRef;
}
// Write type traits
MARK_VAL_T(::Fusion::SceneRef);
DEFINE_IL2CPP_CLASS(::Fusion::SceneRef, "Fusion", "SceneRef");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SceneRef
struct CORDL_TYPE SceneRef {
public:
// Declarations
 __declspec(property(get=get_AsIndex)) int32_t  AsIndex;

 __declspec(property(get=get_AsPathHash)) uint32_t  AsPathHash;

 __declspec(property(get=get_IsIndex)) bool  IsIndex;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field RawValue, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_RawValue, put=__cordl_internal_set_RawValue)) uint32_t  RawValue;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::SceneRef>"
constexpr operator  ::System::IEquatable_1<::Fusion::SceneRef>*() ;

/// @brief Method Equals, addr 0x5fa41f8, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fa4270, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::SceneRef  other) ;

/// @brief Method FromIndex, addr 0x5fa4194, size 0x60, virtual false, abstract: false, final false
static inline ::Fusion::SceneRef FromIndex(int32_t  index) ;

/// @brief Method FromPath, addr 0x5fa4124, size 0x64, virtual false, abstract: false, final false
static inline ::Fusion::SceneRef FromPath(::StringW  path) ;

/// @brief Method FromRaw, addr 0x5fa41f4, size 0x4, virtual false, abstract: false, final false
static inline ::Fusion::SceneRef FromRaw(uint32_t  rawValue) ;

/// @brief Method GetHashCode, addr 0x5fa4280, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsPath, addr 0x5fa40f8, size 0x2c, virtual false, abstract: false, final false
inline bool IsPath(::StringW  path) ;

/// @brief Method Parse, addr 0x5fa4448, size 0x504, virtual false, abstract: false, final false
static inline ::Fusion::SceneRef Parse(::StringW  str) ;

/// @brief Method ToString, addr 0x5fa4288, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x5fa4294, size 0x1b4, virtual false, abstract: false, final false
inline ::StringW ToString(bool  brackets, bool  prefix) ;

constexpr uint32_t const& __cordl_internal_get_RawValue() const;

constexpr uint32_t& __cordl_internal_get_RawValue() ;

constexpr void __cordl_internal_set_RawValue(uint32_t  value) ;

/// @brief Method get_AsIndex, addr 0x5fa3fe8, size 0x88, virtual false, abstract: false, final false
inline int32_t get_AsIndex() ;

/// @brief Method get_AsPathHash, addr 0x5fa4070, size 0x88, virtual false, abstract: false, final false
inline uint32_t get_AsPathHash() ;

/// @brief Method get_IsIndex, addr 0x5fa3fd8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsIndex() ;

/// @brief Method get_IsValid, addr 0x5fa3fc8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_None, addr 0x5fa3fc0, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::SceneRef get_None() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::SceneRef>"
constexpr ::System::IEquatable_1<::Fusion::SceneRef>* i___System__IEquatable_1___Fusion__SceneRef_() ;

/// @brief Method op_Equality, addr 0x5fa4188, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::SceneRef  a, ::Fusion::SceneRef  b) ;

/// @brief Method op_Inequality, addr 0x5fa494c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::SceneRef  a, ::Fusion::SceneRef  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr SceneRef() ;

// Ctor Parameters [CppParam { name: "RawValue", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr SceneRef(uint32_t  RawValue) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___RawValue_padding[0x0];
/// @brief Field RawValue, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___RawValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___RawValue_padding_forAlignment[0x0];
/// @brief Field RawValue, offset: 0x0, size: 0x4, def value: None
 uint32_t  ___RawValue_forAlignment;
};
};
public:

/// @brief Field FLAG_ADDRESSABLE offset 0xffffffff size 0x4
static constexpr uint32_t  FLAG_ADDRESSABLE{static_cast<uint32_t>(0x80000000u)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SceneRef) == 0x4, "Size mismatch!");

} // namespace end def Fusion
