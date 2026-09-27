#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/SimulatedResponseMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimulatedResponseMessage)
// Forward declare root types
namespace Meta::WitAi::Data {
class SimulatedResponseMessage;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::SimulatedResponseMessage*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::SimulatedResponseMessage*, "Meta.WitAi.Data", "SimulatedResponseMessage");
// Dependencies System.Object
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.SimulatedResponseMessage
class CORDL_TYPE SimulatedResponseMessage : public ::System::Object {
public:
// Declarations
/// @brief Field delay, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field responseBody, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseBody, put=__cordl_internal_set_responseBody)) ::StringW  responseBody;

static inline ::Meta::WitAi::Data::SimulatedResponseMessage* New_ctor() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::StringW const& __cordl_internal_get_responseBody() const;

constexpr ::StringW& __cordl_internal_get_responseBody() ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_responseBody(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e479e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulatedResponseMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulatedResponseMessage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulatedResponseMessage(SimulatedResponseMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedResponseMessage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulatedResponseMessage(SimulatedResponseMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31036};

/// @brief Field delay, offset: 0x10, size: 0x4, def value: None
 float_t  ___delay;

/// [TextArea]
/// @brief Field responseBody, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___responseBody;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::SimulatedResponseMessage, ___delay) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::SimulatedResponseMessage, ___responseBody) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::SimulatedResponseMessage) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
