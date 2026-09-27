#pragma once
// IWYU pragma private; include "System/Collections/Hashtable_bucket.hpp"
#include "System/Collections/zzzz__Hashtable_bucket_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "key", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "val", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hash_coll", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Hashtable_bucket::Hashtable_bucket(::System::Object*  key, ::System::Object*  val, int32_t  hash_coll) noexcept  {
this->key = key;
this->val = val;
this->hash_coll = hash_coll;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Hashtable_bucket::Hashtable_bucket()   {
}
