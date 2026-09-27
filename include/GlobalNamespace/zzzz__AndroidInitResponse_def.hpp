#pragma once
// IWYU pragma private; include "GlobalNamespace/AndroidInitResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidInitResponse)
// Forward declare root types
namespace GlobalNamespace {
class AndroidInitResponse;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AndroidInitResponse*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AndroidInitResponse*, "", "AndroidInitResponse");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AndroidInitResponse
class CORDL_TYPE AndroidInitResponse : public ::System::Object {
public:
// Declarations
/// @brief Field msg, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_msg, put=__cordl_internal_set_msg)) ::StringW  msg;

/// @brief Field status, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) int32_t  status;

static inline ::GlobalNamespace::AndroidInitResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_msg() const;

constexpr ::StringW& __cordl_internal_get_msg() ;

constexpr int32_t const& __cordl_internal_get_status() const;

constexpr int32_t& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_msg(::StringW  value) ;

constexpr void __cordl_internal_set_status(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b240f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidInitResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidInitResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidInitResponse(AndroidInitResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidInitResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidInitResponse(AndroidInitResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3623};

/// @brief Field status, offset: 0x10, size: 0x4, def value: None
 int32_t  ___status;

/// @brief Field msg, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___msg;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AndroidInitResponse, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AndroidInitResponse, ___msg) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AndroidInitResponse) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
