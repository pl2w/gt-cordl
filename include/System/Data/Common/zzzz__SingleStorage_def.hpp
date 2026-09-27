#pragma once
// IWYU pragma private; include "System/Data/Common/SingleStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SingleStorage)
namespace System::Collections {
class BitArray;
}
namespace System::Data {
struct AggregateType;
}
namespace System::Data {
class DataColumn;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::Common {
class SingleStorage;
}
// Write type traits
MARK_REF_T(::System::Data::Common::SingleStorage*);
DEFINE_IL2CPP_CLASS(::System::Data::Common::SingleStorage*, "System.Data.Common", "SingleStorage");
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.SingleStorage
class CORDL_TYPE SingleStorage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<float_t>  _values;

/// @brief Method Aggregate, addr 0xa9cd4dc, size 0x780, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0xa9cdc5c, size 0x84, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0xa9cdce0, size 0xc8, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0xa9ce260, size 0x90, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0xa9cdda8, size 0x138, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0xa9ce1e4, size 0x7c, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0xa9cdee0, size 0x58, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0xa9ce338, size 0x100, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0xa9cdf38, size 0x5c, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0xa9ce2f0, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

static inline ::System::Data::Common::SingleStorage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0xa9cdf94, size 0x17c, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0xa9ce110, size 0xd4, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0xa9ce438, size 0xc4, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0xa9cd418, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleStorage(SingleStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleStorage(SingleStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21144};

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::SingleStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Data::Common::SingleStorage) == 0x58, "Size mismatch!");

} // namespace end def System::Data::Common
