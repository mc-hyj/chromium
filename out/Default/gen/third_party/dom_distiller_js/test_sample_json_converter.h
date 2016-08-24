// GENERATED FILE
// This file generated by DomDistillerJs protoc plugin.
#include "test_sample.pb.h"

// base dependencies
#include "base/values.h"

#include <memory>
#include <string>
#include <utility>

namespace dom_distiller {
  namespace test_sample {
    namespace proto {
      namespace json {
        class TypeTest {
         public:
          class Message {
           public:
            static bool ReadFromValue(const base::Value* json, dom_distiller::test_sample::proto::TypeTest::Message* message) {
              const base::DictionaryValue* dict;
              if (!json->GetAsDictionary(&dict)) goto error;
              if (dict->HasKey("1")) {
                bool field_value;
                if (!dict->GetBoolean("1", &field_value)) {
                  goto error;
                }
                message->set_dummy(field_value);
              }
              return true;

            error:
              return false;
            }

            static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::test_sample::proto::TypeTest::Message& message) {
              std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
              if (message.has_dummy()) {
                dict->SetBoolean("1", message.dummy());
              }
              return dict;
            }
          };

          static bool ReadFromValue(const base::Value* json, dom_distiller::test_sample::proto::TypeTest* message) {
            const base::DictionaryValue* dict;
            if (!json->GetAsDictionary(&dict)) goto error;
            if (dict->HasKey("1")) {
              float field_value;
              if (!dict->GetDouble("1", &field_value)) {
                goto error;
              }
              message->set_float_value(field_value);
            }
            if (dict->HasKey("2")) {
              double field_value;
              if (!dict->GetDouble("2", &field_value)) {
                goto error;
              }
              message->set_double_value(field_value);
            }
            if (dict->HasKey("3")) {
              int field_value;
              if (!dict->GetInteger("3", &field_value)) {
                goto error;
              }
              message->set_int32_value(field_value);
            }
            if (dict->HasKey("4")) {
              bool field_value;
              if (!dict->GetBoolean("4", &field_value)) {
                goto error;
              }
              message->set_bool_value(field_value);
            }
            if (dict->HasKey("5")) {
              std::string field_value;
              if (!dict->GetString("5", &field_value)) {
                goto error;
              }
              message->set_string_value(field_value);
            }
            if (dict->HasKey("6")) {
              const base::Value* inner_message_value;
              if (!dict->Get("6", &inner_message_value)) {
                goto error;
              }
              if (!dom_distiller::test_sample::proto::json::TypeTest::Message::ReadFromValue(inner_message_value, message->mutable_message_value())) {
                goto error;
              }
            }
            return true;

          error:
            return false;
          }

          static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::test_sample::proto::TypeTest& message) {
            std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
            if (message.has_float_value()) {
              dict->SetDouble("1", message.float_value());
            }
            if (message.has_double_value()) {
              dict->SetDouble("2", message.double_value());
            }
            if (message.has_int32_value()) {
              dict->SetInteger("3", message.int32_value());
            }
            if (message.has_bool_value()) {
              dict->SetBoolean("4", message.bool_value());
            }
            if (message.has_string_value()) {
              dict->SetString("5", message.string_value());
            }
            if (message.has_message_value()) {
              std::unique_ptr<base::Value> inner_message_value =
                  dom_distiller::test_sample::proto::json::TypeTest::Message::WriteToValue(message.message_value());
              dict->Set("6", std::move(inner_message_value));
            }
            return dict;
          }
        };

        class Repeated {
         public:
          class Message {
           public:
            static bool ReadFromValue(const base::Value* json, dom_distiller::test_sample::proto::Repeated::Message* message) {
              const base::DictionaryValue* dict;
              if (!json->GetAsDictionary(&dict)) goto error;
              if (dict->HasKey("1")) {
                const base::ListValue* field_list;
                if (!dict->GetList("1", &field_list)) {
                  goto error;
                }
                for (size_t i = 0; i < field_list->GetSize(); ++i) {
                  bool field_value;
                  if (!field_list->GetBoolean(i, &field_value)) {
                    goto error;
                  }
                  message->add_dummy(field_value);
                }
              }
              return true;

            error:
              return false;
            }

            static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::test_sample::proto::Repeated::Message& message) {
              std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
              {
                base::ListValue* field_list = new base::ListValue();
                dict->Set("1", field_list);
                for (int i = 0; i < message.dummy_size(); ++i) {
                  field_list->AppendBoolean(message.dummy(i));
                }
              }
              return dict;
            }
          };

          static bool ReadFromValue(const base::Value* json, dom_distiller::test_sample::proto::Repeated* message) {
            const base::DictionaryValue* dict;
            if (!json->GetAsDictionary(&dict)) goto error;
            if (dict->HasKey("1")) {
              const base::ListValue* field_list;
              if (!dict->GetList("1", &field_list)) {
                goto error;
              }
              for (size_t i = 0; i < field_list->GetSize(); ++i) {
                float field_value;
                if (!field_list->GetDouble(i, &field_value)) {
                  goto error;
                }
                message->add_float_value(field_value);
              }
            }
            if (dict->HasKey("2")) {
              const base::ListValue* field_list;
              if (!dict->GetList("2", &field_list)) {
                goto error;
              }
              for (size_t i = 0; i < field_list->GetSize(); ++i) {
                double field_value;
                if (!field_list->GetDouble(i, &field_value)) {
                  goto error;
                }
                message->add_double_value(field_value);
              }
            }
            if (dict->HasKey("3")) {
              const base::ListValue* field_list;
              if (!dict->GetList("3", &field_list)) {
                goto error;
              }
              for (size_t i = 0; i < field_list->GetSize(); ++i) {
                int field_value;
                if (!field_list->GetInteger(i, &field_value)) {
                  goto error;
                }
                message->add_int32_value(field_value);
              }
            }
            if (dict->HasKey("4")) {
              const base::ListValue* field_list;
              if (!dict->GetList("4", &field_list)) {
                goto error;
              }
              for (size_t i = 0; i < field_list->GetSize(); ++i) {
                bool field_value;
                if (!field_list->GetBoolean(i, &field_value)) {
                  goto error;
                }
                message->add_bool_value(field_value);
              }
            }
            if (dict->HasKey("5")) {
              const base::ListValue* field_list;
              if (!dict->GetList("5", &field_list)) {
                goto error;
              }
              for (size_t i = 0; i < field_list->GetSize(); ++i) {
                std::string field_value;
                if (!field_list->GetString(i, &field_value)) {
                  goto error;
                }
                message->add_string_value(field_value);
              }
            }
            if (dict->HasKey("6")) {
              const base::ListValue* field_list;
              if (!dict->GetList("6", &field_list)) {
                goto error;
              }
              for (size_t i = 0; i < field_list->GetSize(); ++i) {
                const base::Value* inner_message_value;
                if (!field_list->Get(i, &inner_message_value)) {
                  goto error;
                }
                if (!dom_distiller::test_sample::proto::json::Repeated::Message::ReadFromValue(inner_message_value, message->add_message_value())) {
                  goto error;
                }
              }
            }
            return true;

          error:
            return false;
          }

          static std::unique_ptr<base::DictionaryValue> WriteToValue(const dom_distiller::test_sample::proto::Repeated& message) {
            std::unique_ptr<base::DictionaryValue> dict(new base::DictionaryValue());
            {
              base::ListValue* field_list = new base::ListValue();
              dict->Set("1", field_list);
              for (int i = 0; i < message.float_value_size(); ++i) {
                field_list->AppendDouble(message.float_value(i));
              }
            }
            {
              base::ListValue* field_list = new base::ListValue();
              dict->Set("2", field_list);
              for (int i = 0; i < message.double_value_size(); ++i) {
                field_list->AppendDouble(message.double_value(i));
              }
            }
            {
              base::ListValue* field_list = new base::ListValue();
              dict->Set("3", field_list);
              for (int i = 0; i < message.int32_value_size(); ++i) {
                field_list->AppendInteger(message.int32_value(i));
              }
            }
            {
              base::ListValue* field_list = new base::ListValue();
              dict->Set("4", field_list);
              for (int i = 0; i < message.bool_value_size(); ++i) {
                field_list->AppendBoolean(message.bool_value(i));
              }
            }
            {
              base::ListValue* field_list = new base::ListValue();
              dict->Set("5", field_list);
              for (int i = 0; i < message.string_value_size(); ++i) {
                field_list->AppendString(message.string_value(i));
              }
            }
            {
              base::ListValue* field_list = new base::ListValue();
              dict->Set("6", field_list);
              for (int i = 0; i < message.message_value_size(); ++i) {
                std::unique_ptr<base::Value> inner_message_value =
                    dom_distiller::test_sample::proto::json::Repeated::Message::WriteToValue(message.message_value(i));
                field_list->Append(std::move(inner_message_value));
              }
            }
            return dict;
          }
        };

      }
    }
  }
}