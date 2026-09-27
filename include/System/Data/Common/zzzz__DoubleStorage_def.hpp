#pragma once
// IWYU pragma private; include "System/Data/Common/DoubleStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__DataStorage_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleStorage)
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
class DoubleStorage;
}
// Write type traits
MARK_REF_T(::System::Data::Common::DoubleStorage*);
DEFINE_IL2CPP_CLASS(::System::Data::Common::DoubleStorage*, "System.Data.Common", "DoubleStorage");
// Dependencies System.Data.Common.DataStorage
namespace System::Data::Common {
// Is value type: false
// CS Name: System.Data.Common.DoubleStorage
class CORDL_TYPE DoubleStorage : public ::System::Data::Common::DataStorage {
public:
// Declarations
/// @brief Field _values, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<double_t>  _values;

/// @brief Method Aggregate, addr 0xa9ae61c, size 0x76c, virtual true, abstract: false, final false
inline ::System::Object* Aggregate(::ArrayW<int32_t>  records, ::System::Data::AggregateType  kind) ;

/// @brief Method Compare, addr 0xa9aed88, size 0x80, virtual true, abstract: false, final false
inline int32_t Compare(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CompareValueTo, addr 0xa9aee08, size 0xc8, virtual true, abstract: false, final false
inline int32_t CompareValueTo(int32_t  recordNo, ::System::Object*  value) ;

/// @brief Method ConvertObjectToXml, addr 0xa9af38c, size 0x90, virtual true, abstract: false, final false
inline ::StringW ConvertObjectToXml(::System::Object*  value) ;

/// @brief Method ConvertValue, addr 0xa9aeed0, size 0x140, virtual true, abstract: false, final false
inline ::System::Object* ConvertValue(::System::Object*  value) ;

/// @brief Method ConvertXmlToObject, addr 0xa9af310, size 0x7c, virtual true, abstract: false, final false
inline ::System::Object* ConvertXmlToObject(::StringW  s) ;

/// @brief Method Copy, addr 0xa9af010, size 0x54, virtual true, abstract: false, final false
inline void Copy(int32_t  recordNo1, int32_t  recordNo2) ;

/// @brief Method CopyValue, addr 0xa9af464, size 0x100, virtual true, abstract: false, final false
inline void CopyValue(int32_t  record, ::System::Object*  store, ::System::Collections::BitArray*  nullbits, int32_t  storeIndex) ;

/// @brief Method Get, addr 0xa9af064, size 0x58, virtual true, abstract: false, final false
inline ::System::Object* Get(int32_t  record) ;

/// @brief Method GetEmptyStorage, addr 0xa9af41c, size 0x48, virtual true, abstract: false, final false
inline ::System::Object* GetEmptyStorage(int32_t  recordCount) ;

static inline ::System::Data::Common::DoubleStorage* New_ctor(::System::Data::DataColumn*  column) ;

/// @brief Method Set, addr 0xa9af0bc, size 0x184, virtual true, abstract: false, final false
inline void Set(int32_t  record, ::System::Object*  value) ;

/// @brief Method SetCapacity, addr 0xa9af240, size 0xd0, virtual true, abstract: false, final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method SetStorage, addr 0xa9af564, size 0xc4, virtual true, abstract: false, final false
inline void SetStorage(::System::Object*  store, ::System::Collections::BitArray*  nullbits) ;

constexpr ::ArrayW<double_t> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<double_t>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<double_t>  value) ;

/// @brief Method .ctor, addr 0xa9a86c8, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataColumn*  column) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoubleStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoubleStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoubleStorage(DoubleStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoubleStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoubleStorage(DoubleStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21123};

/// @brief Field _values, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<double_t>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Common::DoubleStorage, ____values) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Data::Common::DoubleStorage) == 0x58, "Size mismatch!");

} // namespace end def System::Data::Common
