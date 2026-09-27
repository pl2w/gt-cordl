#pragma once
// IWYU pragma private; include "Fusion/TickRate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__TickRate___rates_e__FixedBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TickRate)
namespace GlobalNamespace {
struct TickRate_Resolved;
}
namespace GlobalNamespace {
struct TickRate_Selection;
}
namespace GlobalNamespace {
struct TickRate_ValidateResult;
}
namespace GlobalNamespace {
struct TickRate___rates_e__FixedBuffer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace Fusion {
struct TickRate;
}
// Write type traits
MARK_VAL_T(::Fusion::TickRate);
DEFINE_IL2CPP_CLASS(::Fusion::TickRate, "Fusion", "TickRate");
// [DefaultMember("Item")]
// Dependencies Fusion.TickRate::<_rates>e__FixedBuffer
namespace Fusion {
// Is value type: true
// CS Name: Fusion.TickRate
struct CORDL_TYPE TickRate {
public:
// Declarations
using Resolved = ::GlobalNamespace::TickRate_Resolved;

using Selection = ::GlobalNamespace::TickRate_Selection;

using ValidateResult = ::GlobalNamespace::TickRate_ValidateResult;

using __rates_e__FixedBuffer = ::GlobalNamespace::TickRate___rates_e__FixedBuffer;

 __declspec(property(get=get_Client)) int32_t  Client;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) int32_t  Item[];

/// @brief Field _count, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _lookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lookup, put=setStaticF__lookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::TickRate>*  _lookup;

/// @brief Field _rates, offset 0x4, size 0x10 
 __declspec(property(get=__cordl_internal_get__rates, put=__cordl_internal_set__rates)) ::GlobalNamespace::TickRate___rates_e__FixedBuffer  _rates;

/// @brief Field _valid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__valid, put=setStaticF__valid)) ::ArrayW<::Fusion::TickRate>  _valid;

/// @brief Field _validReadOnly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__validReadOnly, put=setStaticF__validReadOnly)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Fusion::TickRate>*  _validReadOnly;

/// @brief Method ClampSelection, addr 0x5fa51d4, size 0x100, virtual false, abstract: false, final false
inline ::GlobalNamespace::TickRate_Selection ClampSelection(::GlobalNamespace::TickRate_Selection  selection) ;

/// @brief Method Get, addr 0x5fa5dd8, size 0x144, virtual false, abstract: false, final false
static inline ::Fusion::TickRate Get(int32_t  rate) ;

/// @brief Method GetDivisor, addr 0x5fa4f0c, size 0xec, virtual false, abstract: false, final false
inline int32_t GetDivisor(int32_t  index) ;

/// @brief Method GetTickRate, addr 0x5fa4e64, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetTickRate(int32_t  index) ;

/// @brief Method Init, addr 0x5fa53d0, size 0x830, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method InitChecked, addr 0x5fa5c00, size 0x100, virtual false, abstract: false, final false
static inline void InitChecked() ;

/// @brief Method IsValid, addr 0x5fa5d00, size 0x54, virtual false, abstract: false, final false
static inline bool IsValid(::Fusion::TickRate  rate) ;

/// @brief Method IsValid, addr 0x5fa5d54, size 0x84, virtual false, abstract: false, final false
static inline bool IsValid(int32_t  rate) ;

/// @brief Method Resolve, addr 0x5fa5f1c, size 0x1c8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TickRate_Resolved Resolve(::GlobalNamespace::TickRate_Selection  selection) ;

/// @brief Method ToArray, addr 0x5fa4ff8, size 0xe0, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> ToArray() ;

/// @brief Method Validate, addr 0x5fa50d8, size 0xfc, virtual false, abstract: false, final false
inline bool Validate() ;

/// @brief Method ValidateSelection, addr 0x5fa52d4, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::TickRate_ValidateResult ValidateSelection(::GlobalNamespace::TickRate_Selection  selected) ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr ::GlobalNamespace::TickRate___rates_e__FixedBuffer const& __cordl_internal_get__rates() const;

constexpr ::GlobalNamespace::TickRate___rates_e__FixedBuffer& __cordl_internal_get__rates() ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__rates(::GlobalNamespace::TickRate___rates_e__FixedBuffer  value) ;

/// @brief Method .ctor, addr 0x5fa4ea0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<int32_t>  rates) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::TickRate>* getStaticF__lookup() ;

static inline ::ArrayW<::Fusion::TickRate> getStaticF__valid() ;

static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Fusion::TickRate>* getStaticF__validReadOnly() ;

/// @brief Method get_Available, addr 0x5fa60f0, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::Fusion::TickRate>* get_Available() ;

/// @brief Method get_Client, addr 0x5fa4dd8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Client() ;

/// @brief Method get_Count, addr 0x5fa4de0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Default, addr 0x5fa53b4, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TickRate_Selection get_Default() ;

/// @brief Method get_Item, addr 0x5fa4de8, size 0x7c, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method get_Shared, addr 0x5fa53c0, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TickRate_Selection get_Shared() ;

static inline void setStaticF__lookup(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::TickRate>*  value) ;

static inline void setStaticF__valid(::ArrayW<::Fusion::TickRate>  value) ;

static inline void setStaticF__validReadOnly(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Fusion::TickRate>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TickRate() ;

// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rates", ty: "::GlobalNamespace::TickRate___rates_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr TickRate(int32_t  _count, ::GlobalNamespace::TickRate___rates_e__FixedBuffer  _rates) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____count_padding[0x0];
/// @brief Field _count, offset: 0x0, size: 0x4, def value: None
 int32_t  ____count;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____count_padding_forAlignment[0x0];
/// @brief Field _count, offset: 0x0, size: 0x4, def value: None
 int32_t  ____count_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____rates_padding[0x4];
/// [FixedBuffer(typeof(System.Int32), 4)]
/// @brief Field _rates, offset: 0x4, size: 0x10, def value: None
 ::GlobalNamespace::TickRate___rates_e__FixedBuffer  ____rates;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____rates_padding_forAlignment[0x4];
/// [FixedBuffer(typeof(System.Int32), 4)]
/// @brief Field _rates, offset: 0x4, size: 0x10, def value: None
 ::GlobalNamespace::TickRate___rates_e__FixedBuffer  ____rates_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19108};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::TickRate) == 0x14, "Size mismatch!");

} // namespace end def Fusion
