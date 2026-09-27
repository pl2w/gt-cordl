#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/EntryPatchData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EntryPatchData)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class EntryPatchData;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::EntryPatchData*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::EntryPatchData*, "ICSharpCode.SharpZipLib.Zip", "EntryPatchData");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.EntryPatchData
class CORDL_TYPE EntryPatchData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CrcPatchOffset, put=set_CrcPatchOffset)) int64_t  CrcPatchOffset;

 __declspec(property(get=get_SizePatchOffset, put=set_SizePatchOffset)) int64_t  SizePatchOffset;

/// @brief Field crcPatchOffset_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_crcPatchOffset_, put=__cordl_internal_set_crcPatchOffset_)) int64_t  crcPatchOffset_;

/// @brief Field sizePatchOffset_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizePatchOffset_, put=__cordl_internal_set_sizePatchOffset_)) int64_t  sizePatchOffset_;

static inline ::ICSharpCode::SharpZipLib::Zip::EntryPatchData* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_crcPatchOffset_() const;

constexpr int64_t& __cordl_internal_get_crcPatchOffset_() ;

constexpr int64_t const& __cordl_internal_get_sizePatchOffset_() const;

constexpr int64_t& __cordl_internal_get_sizePatchOffset_() ;

constexpr void __cordl_internal_set_crcPatchOffset_(int64_t  value) ;

constexpr void __cordl_internal_set_sizePatchOffset_(int64_t  value) ;

/// @brief Method .ctor, addr 0x9f8f1dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CrcPatchOffset, addr 0x9f8f1cc, size 0x8, virtual false, abstract: false, final false
inline int64_t get_CrcPatchOffset() ;

/// @brief Method get_SizePatchOffset, addr 0x9f8f1bc, size 0x8, virtual false, abstract: false, final false
inline int64_t get_SizePatchOffset() ;

/// @brief Method set_CrcPatchOffset, addr 0x9f8f1d4, size 0x8, virtual false, abstract: false, final false
inline void set_CrcPatchOffset(int64_t  value) ;

/// @brief Method set_SizePatchOffset, addr 0x9f8f1c4, size 0x8, virtual false, abstract: false, final false
inline void set_SizePatchOffset(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntryPatchData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntryPatchData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntryPatchData(EntryPatchData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntryPatchData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntryPatchData(EntryPatchData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17362};

/// @brief Field sizePatchOffset_, offset: 0x10, size: 0x8, def value: None
 int64_t  ___sizePatchOffset_;

/// @brief Field crcPatchOffset_, offset: 0x18, size: 0x8, def value: None
 int64_t  ___crcPatchOffset_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::EntryPatchData, ___sizePatchOffset_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::EntryPatchData, ___crcPatchOffset_) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::EntryPatchData) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
