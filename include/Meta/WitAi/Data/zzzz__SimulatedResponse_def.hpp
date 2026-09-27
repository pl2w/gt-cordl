#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/SimulatedResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimulatedResponse)
namespace Meta::WitAi::Data {
class SimulatedResponseMessage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class SimulatedResponse;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::SimulatedResponse*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::SimulatedResponse*, "Meta.WitAi.Data", "SimulatedResponse");
// Dependencies System.Object
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.SimulatedResponse
class CORDL_TYPE SimulatedResponse : public ::System::Object {
public:
// Declarations
/// @brief Field code, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_code, put=__cordl_internal_set_code)) int32_t  code;

/// @brief Field messages, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_messages, put=__cordl_internal_set_messages)) ::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>*  messages;

/// @brief Field responseDescription, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseDescription, put=__cordl_internal_set_responseDescription)) ::StringW  responseDescription;

static inline ::Meta::WitAi::Data::SimulatedResponse* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_code() const;

constexpr int32_t& __cordl_internal_get_code() ;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>* const& __cordl_internal_get_messages() const;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>*& __cordl_internal_get_messages() ;

constexpr ::StringW const& __cordl_internal_get_responseDescription() const;

constexpr ::StringW& __cordl_internal_get_responseDescription() ;

constexpr void __cordl_internal_set_code(int32_t  value) ;

constexpr void __cordl_internal_set_messages(::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>*  value) ;

constexpr void __cordl_internal_set_responseDescription(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e47960, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulatedResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulatedResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulatedResponse(SimulatedResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulatedResponse(SimulatedResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31035};

/// @brief Field code, offset: 0x10, size: 0x4, def value: None
 int32_t  ___code;

/// @brief Field messages, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>*  ___messages;

/// @brief Field responseDescription, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___responseDescription;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::SimulatedResponse, ___code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::SimulatedResponse, ___messages) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::SimulatedResponse, ___responseDescription) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::SimulatedResponse) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
