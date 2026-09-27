#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/RawTaggedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RawTaggedData)
namespace ICSharpCode::SharpZipLib::Zip {
class ITaggedData;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class RawTaggedData;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::RawTaggedData*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::RawTaggedData*, "ICSharpCode.SharpZipLib.Zip", "RawTaggedData");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.RawTaggedData
class CORDL_TYPE RawTaggedData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::ArrayW<uint8_t>  Data;

 __declspec(property(get=get_TagID, put=set_TagID)) int16_t  TagID;

/// @brief Field _data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::ArrayW<uint8_t>  _data;

/// @brief Field _tag, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get__tag, put=__cordl_internal_set__tag)) int16_t  _tag;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr operator  ::ICSharpCode::SharpZipLib::Zip::ITaggedData*() noexcept;

/// @brief Method GetData, addr 0x9f813cc, size 0x8, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> GetData() ;

static inline ::ICSharpCode::SharpZipLib::Zip::RawTaggedData* New_ctor(int16_t  tag) ;

/// @brief Method SetData, addr 0x9f812f8, size 0xd4, virtual true, abstract: false, final true
inline void SetData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__data() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__data() ;

constexpr int16_t const& __cordl_internal_get__tag() const;

constexpr int16_t& __cordl_internal_get__tag() ;

constexpr void __cordl_internal_set__data(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__tag(int16_t  value) ;

/// @brief Method .ctor, addr 0x9f812c0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int16_t  tag) ;

/// @brief Method get_Data, addr 0x9f813d4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Data() ;

/// @brief Method get_TagID, addr 0x9f812e8, size 0x8, virtual true, abstract: false, final true
inline int16_t get_TagID() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr ::ICSharpCode::SharpZipLib::Zip::ITaggedData* i___ICSharpCode__SharpZipLib__Zip__ITaggedData() noexcept;

/// @brief Method set_Data, addr 0x9f813dc, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::ArrayW<uint8_t>  value) ;

/// @brief Method set_TagID, addr 0x9f812f0, size 0x8, virtual false, abstract: false, final false
inline void set_TagID(int16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RawTaggedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RawTaggedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RawTaggedData(RawTaggedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawTaggedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawTaggedData(RawTaggedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17331};

/// @brief Field _tag, offset: 0x10, size: 0x2, def value: None
 int16_t  ____tag;

/// @brief Field _data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::RawTaggedData, ____tag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::RawTaggedData, ____data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::RawTaggedData) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
