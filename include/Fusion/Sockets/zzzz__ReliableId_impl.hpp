#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableId.hpp"
#include "Fusion/Sockets/zzzz__ReliableKey_impl.hpp"
#include "Fusion/Sockets/zzzz__ReliableId_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::ReliableId.get_SourceCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Fusion::Sockets::ReliableId::*)()>(&::Fusion::Sockets::ReliableId::get_SourceCombined)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6033b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableId>(),
                        {"get_SourceCombined", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& Fusion::Sockets::ReliableId::__cordl_internal_get_Sequence()  {
return this->___Sequence;
}
constexpr uint64_t const& Fusion::Sockets::ReliableId::__cordl_internal_get_Sequence() const {
return this->___Sequence;
}
constexpr void Fusion::Sockets::ReliableId::__cordl_internal_set_Sequence(uint64_t  value)  {
this->___Sequence = value;
}
constexpr int32_t& Fusion::Sockets::ReliableId::__cordl_internal_get_SliceLength()  {
return this->___SliceLength;
}
constexpr int32_t const& Fusion::Sockets::ReliableId::__cordl_internal_get_SliceLength() const {
return this->___SliceLength;
}
constexpr void Fusion::Sockets::ReliableId::__cordl_internal_set_SliceLength(int32_t  value)  {
this->___SliceLength = value;
}
constexpr int32_t& Fusion::Sockets::ReliableId::__cordl_internal_get_TotalLength()  {
return this->___TotalLength;
}
constexpr int32_t const& Fusion::Sockets::ReliableId::__cordl_internal_get_TotalLength() const {
return this->___TotalLength;
}
constexpr void Fusion::Sockets::ReliableId::__cordl_internal_set_TotalLength(int32_t  value)  {
this->___TotalLength = value;
}
constexpr int32_t& Fusion::Sockets::ReliableId::__cordl_internal_get_Source()  {
return this->___Source;
}
constexpr int32_t const& Fusion::Sockets::ReliableId::__cordl_internal_get_Source() const {
return this->___Source;
}
constexpr void Fusion::Sockets::ReliableId::__cordl_internal_set_Source(int32_t  value)  {
this->___Source = value;
}
constexpr int32_t& Fusion::Sockets::ReliableId::__cordl_internal_get_SourceSend()  {
return this->___SourceSend;
}
constexpr int32_t const& Fusion::Sockets::ReliableId::__cordl_internal_get_SourceSend() const {
return this->___SourceSend;
}
constexpr void Fusion::Sockets::ReliableId::__cordl_internal_set_SourceSend(int32_t  value)  {
this->___SourceSend = value;
}
constexpr int32_t& Fusion::Sockets::ReliableId::__cordl_internal_get_Target()  {
return this->___Target;
}
constexpr int32_t const& Fusion::Sockets::ReliableId::__cordl_internal_get_Target() const {
return this->___Target;
}
constexpr void Fusion::Sockets::ReliableId::__cordl_internal_set_Target(int32_t  value)  {
this->___Target = value;
}
constexpr ::Fusion::Sockets::ReliableKey& Fusion::Sockets::ReliableId::__cordl_internal_get_Key()  {
return this->___Key;
}
constexpr ::Fusion::Sockets::ReliableKey const& Fusion::Sockets::ReliableId::__cordl_internal_get_Key() const {
return this->___Key;
}
constexpr void Fusion::Sockets::ReliableId::__cordl_internal_set_Key(::Fusion::Sockets::ReliableKey  value)  {
this->___Key = value;
}
constexpr int32_t& Fusion::Sockets::ReliableId::__cordl_internal_get__padding()  {
return this->____padding;
}
constexpr int32_t const& Fusion::Sockets::ReliableId::__cordl_internal_get__padding() const {
return this->____padding;
}
constexpr void Fusion::Sockets::ReliableId::__cordl_internal_set__padding(int32_t  value)  {
this->____padding = value;
}
inline int64_t Fusion::Sockets::ReliableId::get_SourceCombined()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableId>(),
                        {"get_SourceCombined", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Sequence", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SliceLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TotalLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Source", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SourceSend", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Target", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Key", ty: "::Fusion::Sockets::ReliableKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_padding", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::ReliableId::ReliableId(uint64_t  Sequence, int32_t  SliceLength, int32_t  TotalLength, int32_t  Source, int32_t  SourceSend, int32_t  Target, ::Fusion::Sockets::ReliableKey  Key, int32_t  _padding) noexcept  {
this->Sequence = Sequence;
this->SliceLength = SliceLength;
this->TotalLength = TotalLength;
this->Source = Source;
this->SourceSend = SourceSend;
this->Target = Target;
this->Key = Key;
this->_padding = _padding;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::ReliableId::ReliableId()   {
}
